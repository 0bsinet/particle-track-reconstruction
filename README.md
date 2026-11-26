# Particle Tracking Research

## Overview

<<<<<<< HEAD
This project explores particle tracking and track reconstruction in high-energy particle physics. The goal is to investigate how tracking algorithms perform under challenging conditions, such as increasing event complexity and detector measurement uncertainty. This project aims to mimic the environment of the ATLAS experiment with particular regard to its upgrades for the HL-LHC.
=======
This project studies particle tracking and reconstruction in high-energy
physics. It uses simulated proton-proton collisions to explore how increasing
event complexity and detector effects influence track reconstruction, with a
long-term interest in conditions similar to those at ATLAS and CMS.
>>>>>>> b7ffca9 (Document and configure particle simulation)

## Research question

At what pileup density does an Extended Kalman Filter (EKF)-based tracker begin
to lose reliable state estimation, and which measurements or state parameters
are affected first?

This question is preliminary and may change as the project develops.

<<<<<<< HEAD
## Structure
 - C++ — simulation and algorithm implementation
 - PYTHIA — particle collisione event generation
 - Geant4 — planned detector simulation
 - ACTS — planned track reconstruction framework
 - Python — reconstruction efficiency analysis
 - Git & Github — version control and project documentation
 - WSL/Ubuntu — development environment
=======
## Current status

- A standalone C++ simulation generates top-pair events and minimum-bias pileup
  with Pythia8, converts the events from HepMC3, and runs ACTS Fatras with the
  Open Data Detector (ODD) geometry.
- The current configuration runs 10 events with a mean pileup of 200 and writes
  simulated particles to one CSV file per event.
- A separate toy Pythia8 program writes HepMC3 events for the Python analysis
  script.
- Track reconstruction and the pileup-performance study are still in progress.

## Repository layout

| Path | Purpose |
| --- | --- |
| `pythia/OddFatrasSimulation.cc` | Pythia8 event generation, ODD geometry setup, and ACTS Fatras simulation |
| `pythia/CMakeLists.txt` | Builds the standalone Fatras simulation against the local ACTS checkout |
| `toy_model/` | Small Pythia8/HepMC3 event generator |
| `analysis/inspect_events.py` | Early Python analysis of HepMC3 events |
| `.devcontainer/` | VS Code development-container configuration |
| `requirements.txt` | Python packages used by the analysis script |

ACTS, Geant4, ROOT, DD4hep, and Pythia source/build trees are local dependencies
and are not stored in this repository.

## Dependencies

The C++ programs require Pythia8 and HepMC3. The standalone Fatras simulation
also requires ACTS with its DD4hep, ROOT, Fatras, HepMC3, and Pythia8 example
components enabled, plus DD4hep, ROOT, and ODD geometry and material data.
The `pythia/CMakeLists.txt` file expects the ACTS source checkout at
`acts/acts` by default. These C++ dependencies are separate from the Python
packages listed in `requirements.txt`.

## Build and run the Fatras simulation

Configure from the repository root. Replace the example prefixes with the
installation paths on your machine:

```bash
cmake -S pythia -B pythia/build \
  -DCMAKE_PREFIX_PATH="/path/to/root;/path/to/dd4hep;/path/to/hepmc3" \
  -DHepMC3_DIR="/path/to/hepmc3/lib/cmake/HepMC3"
```

Build the executable:

```bash
cmake --build pythia/build --target OddFatrasSimulation -j2
```

From the repository root, set up the runtime environment and run it:

```bash
source pythia/build/acts/this_acts_withdeps.sh
export ODD_DIR="$ODD_PATH"
export PYTHIA8DATA="$PWD/pythia/pythia8318/share/Pythia8/xmldoc"
mkdir -p hllhc_cpp_output
pythia/build/bin/OddFatrasSimulation
```

The program writes simulated-particle CSV files under `hllhc_cpp_output/`.
That directory is generated output and is ignored by Git.

## Generate and inspect a toy HepMC3 sample

The toy generator writes `my_first_generator.hepmc` in its current working
directory. Run it from `toy_model/` so the analysis script finds the file:

```bash
cmake -S toy_model -B toy_model/build \
  -DCMAKE_PREFIX_PATH="/path/to/hepmc3"
cmake --build toy_model/build -j2

(
  cd toy_model
  export PYTHIA8DATA="$PWD/../pythia/pythia8318/share/Pythia8/xmldoc"
  ./build/my_first_generator
)
```

Install the Python analysis dependencies and run the script:

```bash
python3 -m venv .venv
source .venv/bin/activate
python -m pip install -r requirements.txt
python analysis/inspect_events.py
```

The analysis script currently reads HepMC3 events and collects transverse
momentum and pseudorapidity for stable charged particles. The analysis is still
under development.

## Known issue

Some Pythia decays produce particles at vertices outside the ODD tracking
volume. Fatras then reports `No start volume could be resolved` for those
particles. The treatment of long-lived particles and displaced decays is still
under investigation; current simulation output should be interpreted with
that limitation in mind.
>>>>>>> b7ffca9 (Document and configure particle simulation)
