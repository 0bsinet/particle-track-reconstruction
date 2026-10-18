# HepMC3.py is a part of the PYTHIA event generator.
# Copyright (C) 2026 Torbjorn Sjostrand.
# PYTHIA is licenced under the GNU GPL v2 or later, see COPYING for details.
# Please respect the MCnet Guidelines, see GUIDELINES for details.

# Author: Philip Ilten, March 2026.

# Python implementation for the Pythia8ToFilteredHepMC class,
# implemented in C++ in Pythia8Plugins/HepMC3.h, which converts a
# PYTHIA event record to the standard HepMC format.

#==========================================================================

class Pythia8ToFilteredHepMC3:
    """
    The 'Pythia8ToFilteredHepMC3' class converts the Pythia event
    record into the HepMC3 event format, with the possibility of
    filtering the event.

    Traversing the Pythia event record in the "forward" direction by
    following daughters does not necsssarily produce the same graph
    structure as traversing in the "backward" direction by following
    mothers. From the Pythia HTML manual: "the mother-daughter
    relation normally is reciprocal, but not always. An example is
    hadron beams (indices 1 and 2), where each beam remnant and the
    initiator of each multiparton interaction has the respective beam
    as mother, but the beam itself only has the initiator of the
    hardest interaction as daughter."

    This class takes the "backward" approach.

    Currently this class has three limitations with respect to its C++
    equivalent.
    (1) Heavy ion information is not available via the 'Info' class in
    the Pythia 8 Python bindings, and so this information is not
    included.
    (2) The 'weightContainerPtr' object is not available from the 'Info'
    class and so different multi-weight cross-sections are not available.
    (3) If using the 'pyHepMC3' Python bindings, the 'weights' container
    cannot be modified for a 'GenEvent' object, and so weights are
    stored as an event attribute instead.

    selector:      optional function that takes the Pythia particle record
                   and the inded for a particle. If the particle is
                   selected for storing, then 'True' should
                   returned. If selector is 'None', no selection is
                   applied.
    vertex_status: set the vertex status for all vertices to this value.
    store_color:   if 'True' store the color flow as a particle attribute.
    store_pdf:     if 'True' store the PDF information as an event attribute.
    store_proc:    if 'True' store the process ID as an event attribute.
    store_xsec:    if 'True' store the cross-section as an event attribute.
    store_weights: if 'True' store the event weights as an event attribute.
    """

    #----------------------------------------------------------------------
    def __init__(self, hepmc3 = None):
        """
        Contruct the converter object.

        hepmc3: this is the HepMC3 Python module to use. Currently the
                pyhepmc and pyHepMC3 packages from PyPi are supported.
        """
        # Set the HepMC3 backend, try first 'pyhepmc' then `pyHepMC3`.
        if hepmc3 == None:
            try:
                import pyhepmc
                self.hepmc3  = pyhepmc
            except ImportError:
                from pyHepMC3 import HepMC3
                self.hepmc3  = HepMC3
        else:
            self.hepmc3 = hepmc3
        # Determine the HepMC3 backend.
        if self.hepmc3.__name__ == "pyhepmc": self.pyhepmc = True
        else: self.pyhepmc = False
        # Set the remaining members.
        self.selector = None
        self.internal_event_number = 0
        self.store_color = True
        self.store_pdf = True
        self.store_proc= True
        self.store_xsec = True
        self.store_weights = True
        self.vertex_status = 0

    #----------------------------------------------------------------------
    def fill_next_event(self, evt, ievnum = None, pythia = None, pyev = None,
                        pyinfo = None):
        """
        Fill the HepMC3 'evt' event record from either a Pythia
        instance or event record.
        
        evt:    the HepMC3:GenEvent event to fill.
        ievnum: optionally, the event number for this event.
        pythia: top-level Pythia8:Pythia generator used to fill the event.
        pyev:   if no 'pythia', fill from this Pythia8::Event.
        pyinfo: if no 'pythia', fill information from this Pythia8::Info.
        """
        # Error if no event passed.
        if evt is None:
            return self.warning(
                pyinfo, "Pythia8ToFilteredHepMC::fill_next_event",
                "passed null HepMC3::GenEvent")

        # Set the event, information, and settings.
        if pythia:
            if pyev is None:
                pyev = pythia.event
            if pyinfo is None:
                pyinfo = pythia.infoPython()
        if pyev is None:
            return self.warning(
                pyinfo, "Pythia8ToFilteredHepMC::fill_next_event",
                "passed null Pythia8::Event")
        
        # Event number counter.
        if ievnum is None:
            ievnum = self.internal_event_number
            self.internal_event_number += 1
        if self.pyhepmc:
            evt.event_number = ievnum
        else:
            evt.set_event_number(ievnum)
            
        # Set units to be GeV and mm, to agree with Pythia ones.
        evt.set_units(self.hepmc3.Units.GEV, self.hepmc3.Units.MM)

        # Currently, the hiInfo object is is not available in the
        # Python interface.
        # hiinfo = pyinfo.hiInfo
        # if pyinfo and not hiinfo is None:
        #     ion = hepmc.GenHeavyIon()
        #     ion.Ncoll_hard = pyinfo.hiInfo.nCollND()
        #     ion.Ncoll = pyinfo.hiInfo.nCollTot()
        #     ion.Npart_proj = (
        #         pyinfo.hiInfo.nAbsProj() + pyinfo.hiInfo.nDiffProj())
        #     ion.Npart_targ = (
        #         pyinfo.hiInfo.nAbsTarg() + pyinfo.hiInfo.nDiffTarg())
        #     ion.impact_parameter = pyinfo.hiInfo.b()
        #     evt.set_heavy_ion(ion)

        # Build all the vertices from the particle record.
        # 'vrts' is a dictionary with keys (mother1, mother2) and values of
        # HepMC3::GenVertex.
        vrts = {}
        # 'prts' is a list of all HepMC3::GenParticle in the event.
        prts = [None]*pyev.size()
        # Loop over the particles backwards.
        for iPrt in range(pyev.size() - 1, 0, -1):
            self.add(pyev, iPrt, vrts, prts)
        
        # Reconnect intermediate particles without an end vertex.
        for iPrt in range(pyev.size()):
            # Skip final particles.
            if pyev[iPrt].isFinal():
                continue
            # Skip particles that are not included in the record.
            prt = prts[iPrt]
            if prt is None:
                continue
            # Skip particles with end vertices.
            if self.pyhepmc:
                if prt.end_vertex:
                    continue
            else:
                if prt.end_vertex():
                    continue
            # Find the first daughter that has a production vertex.
            for iDtr in pyev[iPrt].daughterListRecursive():
                dtr = prts[iDtr]
                if dtr:
                    if self.pyhepmc:
                        pro = dtr.production_vertex
                    else:
                        pro = dtr.production_vertex()
                    pro.add_particle_in(prt)
                        
        # Reserve memory for the event.
        evt.reserve(len(prts), len(vrts))
    
        # Add the vertices (sorted). This maintains consistency with
        # using a 'map' in the C++ implementation.
        for key, vrt in sorted(vrts.items()):
            evt.add_vertex(vrt)
            
        # Store color flow.
        # This has to be performed after the particles have been added to
        # the event, otherwise the attribute will not be persisted.
        if self.store_color:
            for iPrt in range(pyev.size()):
                if prts[iPrt] is None:
                    continue
                colType = pyev[iPrt].colType()
                if colType ==  -1 or colType ==  1 or colType == 2:
                    flow1 = 0
                    flow2 = 0
                    if colType ==  1 or colType == 2:
                        flow1 = pyev[iPrt].col()
                    if colType == -1 or colType == 2:
                        flow2 = pyev[iPrt].acol()
                    if self.pyhepmc:
                        prts[iPrt].attributes["flow1"] = flow1
                        prts[iPrt].attributes["flow2"] = flow2
                    else:
                        prts[iPrt].add_attribute(
                            "flow1", self.hepmc3.IntAttribute(flow1))
                        prts[iPrt].add_attribute(
                            "flow2", self.hepmc3.IntAttribute(flow2))
    
        # Store PDF, weight, cross section and other event information.
        # Flavours of incoming partons.
        if self.store_pdf and pyinfo:
            # Create and add the PDF info.
            if self.pyhepmc:
                pdfinfo = self.hepmc3.GenPdfInfo(
                    pyinfo.id1pdf(), pyinfo.id2pdf(), pyinfo.x1pdf(),
                    pyinfo.x2pdf(), pyinfo.QFac(), pyinfo.pdf1(),
                    pyinfo.pdf2())
                evt.pdf_info = pdfinfo
            else:
                pdfinfo = self.hepmc3.GenPdfInfo()
                pdfinfo.set(
                    pyinfo.id1pdf(), pyinfo.id2pdf(), pyinfo.x1pdf(),
                    pyinfo.x2pdf(), pyinfo.QFac(), pyinfo.pdf1(),
                    pyinfo.pdf2())
                evt.set_pdf_info(pdfinfo)

        # Store process code, scale, alpha_em, alpha_s.
        if self.store_proc and pyinfo:
            if self.pyhepmc:
                evt.attributes["signal_process_id"] = pyinfo.code()
                evt.attributes["mpi"] = pyinfo.nMPI()
                evt.attributes["event_scale"] = pyinfo.QRen()
                evt.attributes["alphaQCD"] = pyinfo.alphaS()
                evt.attributes["alphaQED"] = pyinfo.alphaEM()
            else:
                evt.add_attribute("signal_process_id",
                                  self.hepmc3.IntAttribute(pyinfo.code()))
                evt.add_attribute("mpi",
                                  self.hepmc3.IntAttribute(pyinfo.nMPI()))
                evt.add_attribute("event_scale",
                                  self.hepmc3.DoubleAttribute(pyinfo.QRen()))
                evt.add_attribute("alphaQCD",
                                  self.hepmc3.DoubleAttribute(pyinfo.alphaS()))
                evt.add_attribute("alphaQED",
                                  self.hepmc3.DoubleAttribute(pyinfo.alphaEM()))

        # Store event weights.
        if self.store_weights and pyinfo:
            if self.pyhepmc:
                evt.weights = [
                    pyinfo.weightValueByIndex(iWeight)
                    for iWeight in range(pyinfo.numberOfWeights())]
            else:
                # For the bundled HepMC3 Python interface, the weights
                # container cannot be changed, so instead the weights are
                # stored as an attribute.
                wgts = evt.weights()
                wgts.clear()
                for iWeight in range(pyinfo.numberOfWeights()):
                    wgts.append(pyinfo.weightValueByIndex(iWeight))
                evt.add_attribute(
                    "weights", self.hepmc3.VectorDoubleAttribute(wgts))

        # Store cross-section information in pb.
        if self.store_xsec and pyinfo:
            # First set attribute to event, such that
            # GenCrossSection::set_cross_section knows how many weights the
            # event has and sets the number of cross sections accordingly.
            xsec = self.hepmc3.GenCrossSection()
            if self.pyhepmc:
                evt.cross_section = xsec
            else:
                evt.set_cross_section(xsec)
            xsec.set_cross_section(
                pyinfo.sigmaGen()*1e9, pyinfo.sigmaErr()*1e9)
            # If multiweights with possibly different xsec, overwrite
            # central value.
            # Currently the weightContainerPtr object is not available
            # through the Pythia 8 Python interface.
            # xsecVec = pyinfo.weightContainerPtr.getTotalXsec()
            # if xsecVec.size() > 0:
            #     for iXsec in range(xsecVec.size()):
            #         xsec.set_xsec(iXsec, xsecVec[iXsec]*1e9)

        # Done.
        return True

    #----------------------------------------------------------------------
    def particle(self, pyev, idx, prts):
        """
        For internal use. Returns a HepMC3::GenParticle for a given
        Pythia particle index.

        pyev: Pythia8::Event object.
        idx:  index of the particle to convert.
        prts: list of HepMC3::GenParticle for keeping storage.
        """
        prt = prts[idx]
        if prt is None:
            prt = self.hepmc3.GenParticle(
                self.hepmc3.FourVector(
                    pyev[idx].px(), pyev[idx].py(), pyev[idx].pz(),
                    pyev[idx].e()), pyev[idx].id(), pyev[idx].statusHepMC())
            if self.pyhepmc:
                prt.generated_mass = pyev[idx].m()
            else:
                prt.set_generated_mass(pyev[idx].m())
            prts[idx] = prt
        return prt
  
    #----------------------------------------------------------------------
    def add(self, pyev, iPrt, vrts, prts, check = True):
        """
        For internal use. Add the vertex for a particle.
        
        pyev:  Pythia8::Event
        iPrt:  particle index in the Pythia event record.
        vrts:  the vertex map.
        prts:  list of HepMC3::GenParticle objects.
        check: check if the particle should be kept.
        """
        # Create the particle and production vertex.
        vrt = None
        prt = None
        # Filter and create the particle if it does not already exist.
        if check:
            if self.selector is None or self.selector(pyev, iPrt):
                prt = self.particle(pyev, iPrt, prts)
            else:
                return vrt

        # Check if the vertex exists.
        key = (pyev[iPrt].mother1(), pyev[iPrt].mother2())
        # Set the vertex if it exists.
        if (key in vrts):
            vrt = vrts[key]
        # Set the vertex if it does not exist. 
        else:
            # Check if there are linking mothers.
            iMoms = pyev[iPrt].motherList()
            link = False
            for idx, iMom in enumerate(iMoms):
                if self.selector is None or self.selector(pyev, iMom):
                    link = True
                else:
                    iMoms[idx] = -iMom
            # Create the vertex if linking mothers exist.
            if link:
                vrt = self.hepmc3.GenVertex(
                    self.hepmc3.FourVector(
                        pyev[iPrt].xProd(), pyev[iPrt].yProd(),
                        pyev[iPrt].zProd(), pyev[iPrt].tProd()))
                if self.pyhepmc:
                    vrt.status = self.vertex_status
                else:
                    vrt.set_status(self.vertex_status)
                for iMom in iMoms:
                    if iMom > 0:
                        vrt.add_particle_in(self.particle(pyev, iMom, prts))
            
            # Get the upstream vertex if no linking mothers exist.
            else:
                for iMom in iMoms:
                    if iMom != 0:
                        vrt = self.add(pyev, abs(iMom), vrts, prts, False)
                        break
            # Set the vertex.
            vrts[key] = vrt
        
        # Add the outgoing particle.
        if prt and vrt:
            vrt.add_particle_out(prt)
        # Return the vertex.
        return vrt
  
    #----------------------------------------------------------------------
    def warning(pyinfo, loc, message, extraInfo = ""):
        """
        Try to send warning message to the Pythia logger if present,
        otherwise print to screen if print_inconsistency is 'True'.

        pyinfo:  if a Pythia8::Info object is provided, log the message,
                 otherwise print to screen if 'print_inconsistency' is
                 'True'.
        loc:     location (in code) of the warning message.
        message: the warning message.
        """
        try:
            pyinfo.loggerPtr.warningMsg(loc, message, extraInfo)
        except:
            print(f"Warning in {loc}: {message} {extraInfo}")
        return False
