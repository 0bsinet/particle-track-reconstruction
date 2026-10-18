// main235.cc is a part of the PYTHIA event generator.
// Copyright (C) 2026 Torbjorn Sjostrand.
// PYTHIA is licenced under the GNU GPL v2 or later, see COPYING for details.
// Please respect the MCnet Guidelines, see GUIDELINES for details.

// Authors: Christian T. Preuss

// Contact: Christian T. Preuss <preuss@physik.rwth-aachen.de>

// Keywords: matching; merging; leading order; NLO; powheg; madgraph; aMC@NLO;
//           CKKW-L; UMEPS; NL3; UNLOPS; FxFx; MLM;
//           userhooks; LHE file; HDF5 file; LHEH5; hepmc; rivet; general usage

// This example covers generic Pythia usage in an omnibus main program.

#include "Pythia8/Pythia.h"
#include "Pythia8/PythiaParallel.h"
#include "Pythia8Plugins/InputParser.h"

using namespace Pythia8;

// Short-hand functions for checking if a plugin is loaded.
bool load(Pythia& pythia, string lib) {
  return pythia.settings.registerPluginLibrary(lib);}
bool load(PythiaParallel& pythia, string lib) {
  return pythia.settings.registerPluginLibrary(lib);}

//==========================================================================

// General example program for usage of PYTHIA.

int main(int argc, char** argv){

  // Set up command line options.
  InputParser ip("General usage of PYTHIA.",
    {"./main235 [command-line arguments] [SETTINGS]"});
  ip.add("c", "", "Use this user-written command file.", {"-cmnd"});
  ip.add("V", "-1", "Verbosity level for messages.", {"-verbosity"});
  ip.add("n", "-1", "Generate this many events.", {"-number-of-events"});
  ip.add("s", "-1", "Use this random-number seed.", {"-seed"});
  ip.add("f", "", "Use this event file (LHEF, LHEH5).",
    {"-file", "-event-file"});
  ip.add("t", "0", "Run on multiple threads.", {"-threads"});
  ip.add("L", "", "Write LHEF 3 events to specified file.", {"-lhef-output"});
  ip.add("H", "", "Write HepMC3 events to specified file.",
    {"-hepmc", "-hepmc-output"});
  ip.add("A", "", "Run RIVET with the specified analyses.",
    {"-analyses", "-rivet-analyses"});
  ip.add("R", "", "Write RIVET output to specified file.",
    {"-rivet", "-rivet-output"});
  ip.add("P", "",
    "Load specified list runtime plugins. Can also be used multiple times.",
    {"-plugin", "-plugins"});
  ip.add("v", "false", "Print PYTHIA version number and exit.", {"-version"});

  // Initialise the parser and exit if necessary.
  InputParser::Status status = ip.init(argc, argv);
  if (status != InputParser::Valid) return status;

  // Print version number and exit.
  if (ip.get<bool>("v")) {
    cout << "PYTHIA version: " << PYTHIA_VERSION << endl;
    return 0;
  }

  // Input file.
  string cmndFile = ip.get<string>("c");

  // Generator.
  PythiaParallel pythia;
  pythia.readString("Parallelism:numThreads = " + to_string(ip.get<int>("t")));

  // Read command file.
  if (cmndFile != "") pythia.readFile(cmndFile);

  // Read command-line arguments as Pythia settings.
  vector<string> args = ip.getArguments();
  for (string& s : args) pythia.readString(s);

  // Plugin libraries to load.
  string libLHEF   = "libpythia8lhefHooks.so";
  string libHepMC  = "libpythia8hepmc3.so";
  string libRivet  = "libpythia8rivet.so";
  string libPowheg = "libpythia8powhegHooks.so";
  string libMatch  = "libpythia8jetMatchingHooks.so";

  // Override settings specified on the command line.
  int            verbose  = ip.get<int>("V");
  int            seed     = ip.get<int>("s");
  int            nEvents  = ip.get<int>("n");
  string         lhefIn   = ip.get<string>("f");
  string         lhefOut  = ip.get<string>("L");
  string         rivetOut = ip.get<string>("R");
  string         rivetAna = ip.get<string>("A");
  string         hepmcOut = ip.get<string>("H");
  vector<string> plugins  = ip.getVector<string>("P");
  bool useHDF5 = false;
  if (verbose > -1)
    pythia.settings.mode("Print:verbosity", verbose);
  if (seed > -1) {
    pythia.readString("Random:setSeed = on");
    pythia.settings.mode("Random:seed", seed);
  }
  if (nEvents > -1)
    pythia.settings.mode("Main:numberOfEvents", nEvents);
  if (lhefIn != "") {
    if (trimString(splitString(lhefIn, ".").back()) == "hdf5") {
      pythia.readString("Beams:frameType = 5");
      useHDF5 = true;
    } else pythia.readString("Beams:frameType = 4");
    pythia.readString("Beams:LHEF = " + lhefIn);
  }
  if (lhefOut != "" && load(pythia, libLHEF)) {
    pythia.readString("Init:plugins += {" + libLHEF + "::LHEFHooks}");
    pythia.readString("LHEF:fileName = " + lhefOut);
  }
  if (hepmcOut != "" && load(pythia, libHepMC)) {
    pythia.readString("Init:plugins += {" + libHepMC + "::HepMC3Hooks}");
    pythia.readString("HepMC:fileName = " + hepmcOut);
  }
  if ((rivetOut != "" || rivetAna != "") && load(pythia, libRivet)) {
    pythia.readString("Init:plugins += {" + libRivet + "::RivetHooks}");
    if (rivetOut != "") pythia.readString("Rivet:fileName = " + rivetOut);
    if (rivetAna != "") pythia.readString("Rivet:analyses = " + rivetAna);
  }
  if (plugins.size() > 0) {
    for (string& p : plugins)
      pythia.readString("Init:plugins += {" + p + "}");
  }

  // Optionally load HDF5 reader (currently not available).
  if (useHDF5) {
    pythia.logger.abortMsg("main()", "failed to load HDF5 reader");
    return 1;
  }

  // Check if matching should be done.
  bool doPowhegMatching = pythia.mode("POWHEG:veto")
    || pythia.mode("POWHEG:MPIveto");
  bool doJetMatching    = pythia.flag("JetMatching:merge");

  // Optionally load UserHooks for POWHEG vetos.
  if (doPowhegMatching && load(pythia, libPowheg)) {
    pythia.readString("Init:plugins += {" + libPowheg + "::PowhegHooks}");
    // Set showers to start at the kinematical limit.
    if (pythia.mode("POWHEG:veto") > 0) {
      if (pythia.mode("PartonShowers:model") == 2) {
        pythia.readString("Vincia:tune = 0");
        pythia.readString("Vincia:pTmaxMatch = 2");
      } else {
        pythia.readString("SpaceShower:pTmaxMatch = 2");
        pythia.readString("TimeShower:pTmaxMatch = 2");
      }
    }
    // Set MPI to start at the kinematical limit.
    if (pythia.mode("POWHEG:MPIveto") > 0)
      pythia.readString("MultipartonInteractions:pTmaxMatch = 2");
  }

  // Optionally load UserHooks for jet matching.
  if (doJetMatching && load(pythia, libMatch)) {
    int  scheme = pythia.mode("JetMatching:scheme");
    if (pythia.word("Alpgen:file") != "void") {
      cout << "ALPGEN input not supported in this example.\n";
      return 1;
    } else {
      if (scheme == 1)
        pythia.readString(
          "Init:plugins += {" + libMatch + "::JetMatchingMadgraph}");
      else if (scheme == 2)
        pythia.readString(
          "Init:plugins += {" + libMatch + "::JetMatchingAlpgen}");
    }
  }

  // Initialise.
  if (!pythia.init()) {
    pythia.logger.abortMsg("main()", "failed to initialise Pythia");
    return 1;
  }

  // Run.
  pythia.run([&](Pythia*){});

  // Print cross section and errors.
  pythia.stat();

  // Done.
  return 0;

}
