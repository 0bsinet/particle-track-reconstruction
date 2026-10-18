# main299.py is a part of the PYTHIA event generator.
# Copyright (C) 2026 Philip Ilten and Torbjorn Sjostrand.
# PYTHIA is licenced under the GNU GPL v2 or later, see COPYING for details.
# Please respect the MCnet Guidelines, see GUIDELINES for details.

# Authors: Philip Ilten <philten@cern.ch>

# Keywords: python; hepmc

# Example usage of the 'Pythia8ToFilteredHepMC3' class to convert PYTHAI event
# records into HepMC3 event records.

# To set the path to the Pythia 8 Python interface do either
# (in a shell prompt):
#      export PYTHONPATH=$(PREFIX_LIB):$PYTHONPATH
# or the following which sets the path from within Python.
import sys
cfg = open("Makefile.inc")
lib = "../lib"
for line in cfg:
    if line.startswith("PREFIX_LIB="): lib = line[11:-1]; break
sys.path.insert(0, lib)

# Import the Pythia module.
import pythia8

# Particle selection filter.
# Keep all Pythia hard process particles and all necessary HepMC particles.
def selector(pyev, idx):
    return (0 < pyev[idx].statusHepMC() < 5) or (
        10 < pyev[idx].statusAbs() < 40)

# Create the generator.
import pythia8
pythia = pythia8.Pythia()
pythia.readString("HardQCD:all = on")
pythia.init()

# Create the full event convertor.
convertFull = pythia8.Pythia8ToFilteredHepMC3()
# Set the particle selector to all particles.
convertFull.selector = None
# Below are some options that can be configured.
# Set the status assigned to all vertices.
convertFull.vertex_status = 0
# The following controls what additional information can be written
# to the event record.
# Do not store color flow information.
convertFull.store_color = False
# Do not store PDF information.
convertFull.store_pdf = False
# Do not store cross-section information.
convertFull.store_xsec = False
# Do not store weight information.
convertFull.store_weights = False

# Create the partial event converter.
convertPart = pythia8.Pythia8ToFilteredHepMC3()
# Set the particle selector to only hard process and HepMC particles.
convertPart.selector = selector

# Create the writers. The syntax depends on the HepMC3 backend
# (pyhepmc or HepMC3).
if convertFull.pyhepmc:
    writerFull = convertFull.hepmc3.open("main299_pyhepmc_full.hepmc", "w")
    writerPart = convertPart.hepmc3.open("main299_pyhepmc_part.hepmc", "w")
else:
    writerFull = convertFull.hepmc3.WriterAscii("main299_hepmc3_full.hepmc")
    writerPart = convertPart.hepmc3.WriterAscii("main299_hepmc3_part.hepmc")
    
# Loop over the events.
for iEvt in range(0, 10):
    # Generate the event.
    pythia.next()

    # Convert and write the event (full).
    eventFull = convertFull.hepmc3.GenEvent()
    convertFull.fill_next_event(eventFull, pythia = pythia)
    if convertFull.pyhepmc:
        writerFull.write(eventFull)
    else:
        writerFull.write_event(eventFull)

    # Convert and write the event (part).
    eventPart = convertPart.hepmc3.GenEvent()
    convertPart.fill_next_event(eventPart, pythia = pythia)
    if convertPart.pyhepmc:
        writerPart.write(eventPart)
    else:
        writerPart.write_event(eventPart)
                
# Close the writer.
writerFull.close()
writerPart.close()
