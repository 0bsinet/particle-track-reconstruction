# main300.py is a part of the PYTHIA event generator.
# Copyright (C) 2026 Philip Ilten and Torbjorn Sjostrand.
# PYTHIA is licenced under the GNU GPL v2 or later, see COPYING for details.
# Please respect the MCnet Guidelines, see GUIDELINES for details.

# Authors: Philip Ilten <philten@cern.ch>

# Keywords: python; visualization

# Example of how to use VISTAS to visualize a Pythia event.

# To set the path to the Pythia 8 Python interface do either
# (in a shell prompt):
#      export PYTHONPATH=$(PREFIX_LIB):$PYTHONPATH
# or the following which sets the path from within Python.
import sys
cfg = open("../Makefile.inc")
lib = "../lib"
for line in cfg:
    if line.startswith("PREFIX_LIB="): lib = line[11:-1]; break
sys.path.insert(0, lib)

# Import Pythia.
import pythia8

# Create the Pythia object.
pythia = pythia8.Pythia("", False)
pythia.readString("Print:quiet = on")

# Set beams to proton (2212) and proton (2212).
pythia.readString("Beams:idA = 2212")
pythia.readString("Beams:idB = 2212")

# Set asymmetric beam energies (in GeV).
pythia.readString("Beams:frameType = 2")
pythia.readString("Beams:eA = 6500")
pythia.readString("Beams:eB = 6500")

# Enable top pair production.
pythia.readString("Top:gg2ttbar = on")

# Initialize Pythia and generate an event.
pythia.init()
pythia.next()

# Visualize the event.
viewer = pythia8.Vistas(pythia)
viewer.display()

# Only show the hard process and MPI.
viewer.opts["show"] = ["hard process", "MPI"]
viewer.display()

# Reset the options.
viewer.opts = viewer.options()

# Turn on anti-kT jets.
viewer.opts["jets"]["algorithm"] = "akt"
viewer.display()

# Reset the options.
viewer.opts = viewer.options()

# Change length to be proportional to energy.
viewer.opts["length"]["scale"] = "log"
viewer.opts["length"]["observable"] = "p.e()"
viewer.display()
