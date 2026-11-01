# Inspect the HepMC file exported by my_first_generator.cc

import pyhepmc
from pathlib import Path

PROJECT_ROOT = Path(__file__).resolve().parent.parent

filename = PROJECT_ROOT / "toy_model" / "my_first_generator.hepmc"

with pyhepmc.open(filename) as reader:
  for event in reader:
    print("Event Number:", event.event_number)
    print("Number of particles:", len(event.particles))

    for particle in event.particles:
      print(
        "PID:", particle.pid,
        "Momentum", particle.momentum
      )

    break
