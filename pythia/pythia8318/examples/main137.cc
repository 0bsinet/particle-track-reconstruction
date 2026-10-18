// main137.cc is a part of the PYTHIA event generator.
// Copyright (C) 2026 Torbjorn Sjostrand.
// PYTHIA is licenced under the GNU GPL v2 or later, see COPYING for details.
// Please respect the MCnet Guidelines, see GUIDELINES for details.

// Authors: Philip Ilten <philten@cern.ch>

// Keywords: hepmc

// This example shows how to produced filtered HepMC3 events from
// PYTHIA events.

#include "Pythia8/Pythia.h"
#include "Pythia8Plugins/HepMC3.h"

using namespace Pythia8;

//==========================================================================

// Particle selection filter.
// Keep all Pythia hard process particles and all necessary HepMC particles.

bool selectHardHepMC(const Pythia8::Event& pyev, size_t idx) {
  int pyStatus = pyev[idx].statusAbs();
  int hmStatus = pyev[idx].statusHepMC();
  return (hmStatus > 0 && hmStatus < 5) || (pyStatus > 10 && pyStatus < 40);
}

//==========================================================================

// Example main program.

int main() {

  // Create the generator.
  Pythia pythia;
  pythia.readString("HardQCD:all = on");
  pythia.init();

  // Create the original converter where filtering is not available.
  HepMC3::Pythia8ToHepMC3 convert;

  // Create the full event convertor.
  HepMC3::Pythia8ToFilteredHepMC3 convertFull;
  // Set the particle selector to all particles.
  convertFull.set_selector(nullptr);
  // Below are some options that can be configured.
  // Set the status assigned to all vertices.
  convertFull.set_vertex_status(0);
  // The following controls what additional information can be written
  // to the event record.
  // Do not store color flow information.
  convertFull.set_store_color(false);
  // Do not store PDF information.
  convertFull.set_store_pdf(false);
  // Do not store cross-section information.
  convertFull.set_store_xsec(false);
  // Do not store weight information.
  convertFull.set_store_weights(false);

  // Create the partial event converter.
  HepMC3::Pythia8ToFilteredHepMC3 convertPart;
  // Set the particle selector to only hard process and HepMC particles.
  convertPart.set_selector(selectHardHepMC);

  // Create the writers.
  HepMC3::WriterAscii writer("main137.hepmc");
  HepMC3::WriterAscii writerFull("main137_full.hepmc");
  HepMC3::WriterAscii writerPart("main137_part.hepmc");

  // Loop over the events.
  for (int iEvt = 0; iEvt < 10; ++iEvt) {
    pythia.next();

    // Convert and write the event (original converter).
    HepMC3::GenEvent event;
    convert.fill_next_event(pythia, event);
    writer.write_event(event);

    // Convert and write the event (full).
    HepMC3::GenEvent eventFull;
    convertFull.fill_next_event(pythia, eventFull);
    writerFull.write_event(eventFull);

    // Convert and write the event (part).
    HepMC3::GenEvent eventPart;
    convertPart.fill_next_event(pythia, eventPart);
    writerPart.write_event(eventPart);
  }

  // Close the writers.
  writer.close();
  writerFull.close();
  writerPart.close();

  return 0;
}
