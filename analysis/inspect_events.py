# Inspect the HepMC file exported by my_first_generator.cc
import pyhepmc
import numpy as np 
import matplotlib.pyplot as plt

from particle import Particle
from pathlib import Path

# Locate the project directory and input file
PROJECT_ROOT = Path(__file__).resolve().parent.parent
filename = PROJECT_ROOT / "toy_model" / "my_first_generator.hepmc"

# Determine whether a particle has electric charge
def is_charged(pid):
  try:
    particle_info = Particle.from_pdgid(pid)
    return particle_info.charge != 0
  except Exception:
    # Ignore particles whose PDG IDs are not recognized
    return False


# Store observables
multiplicities = []
pt_values = []
eta_values = []

vertex_x = []
vertex_y = []
vertex_z = []

# Read HepMC events
with pyhepmc.open(filename) as reader:

  for event in reader:
    charged_count = 0

    print("Event Number:", event.event_number)
    print("Number of particles:", len(event.particles))

    for particle in event.particles:

      # Only consider stable final-state particles
      if particle.status != 1:
        continue

      if not is_charged(particle.pid):
        continue

      charged_count += 1

      # Extract momentum components
      momentum = particle.momentum

      px = momentum.px
      py = momentum.py
      pz = momentum.pz

      # Transverse momentum
      pt = np.sqrt(px**2 + py **2)

      pt_values.append(pt)

      # Pseudorapidity
      if pt > 0:
        eta = np.arcsinh(pz / pt)
        eta_values.append(eta)

    
