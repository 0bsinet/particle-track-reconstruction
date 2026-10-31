/*
This program is not apart of the simulation and is instead a toy model to test the functionality of Pythia

Generates 100 proton-proton collision events at 8 TeV
Stores particle information from each event in toy_particles.csv
*/

#include "Pythia8/Pythia.h"
#include "Pythia8Plugins/HepMC3.h"
#include <fstream>
#include <iomanip>

using namespace Pythia8;
using namespace std;

int main() {
  // Interface for conversion from Pythia8::Event to HepMC event
  Pythia8ToHepMC toHepMC("my_first_generator.hepmc");

  Pythia pythia;

  // Configure the collision
  pythia.readString("Beams:eCM = 8000.");
  pythia.readString("HardQCD:all = on");
  pythia.readString("PhaseSpace:pThatMin = 20.");

  if (!pythia.init()) {
    return 1;
  } 

  int successfulEvents = 0;
  int savedParticles = 0;

  // Generate 100 proton-proton collision events
  for (int iEvent = 0; iEvent < 100; ++iEvent){
    if (!pythia.next()) {
      continue;
    }
    ++successfulEvents;

    // Examine every particle in the event record
    for (int i = 0; i < pythia.event.size(); ++i) {
      auto& particle = pythia.event[i];

      // Keep only final-state charged particles
      if (!particle.isFinal() || !particle.isCharged()) {
        continue;
      }

      ++savedParticles;
    }
    // Constuct new empty HepMC event, fill it and write it out
    toHepMC.writeNextEvent( pythia );
  } 
  

  pythia.stat();

  cout << "\nSuccessful events: " << successfulEvents << "\n";
  cout << "Saved charged particles: " << savedParticles << "\n";

  return 0;
}