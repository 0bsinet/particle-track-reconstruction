// main373.cc is a part of the PYTHIA event generator.
// Copyright (C) 2026 Torbjorn Sjostrand.
// PYTHIA is licenced under the GNU GPL v2 or later, see COPYING for details.
// Please respect the MCnet Guidelines, see GUIDELINES for details.

// Authors: Torbjörn Sjöstrand <torbjorn.sjostrand@fysik.lu.se>

// Keywords: top; toponium

// Energy dependence of the total cross section in the threshold region
// of e+e- -> gamma*/Z0 -> t tbar.

// Special case for comparison with Fig. 1 of Hoang et al. review,
// A. H. Hoang et al., "Top - anti-top pair production close to threshold:
// Synopsis of recent NNLO results," Eur. Phys. J. direct 2 (2000), no. 1, 3,
// hep-ph/0001286,
// but note that the definition of top mass is ambiguous.

// Study five variations of the basic cross section calculations.
// 0 = Born, 1 = Coulomb, 2 = narrow Green, 3 = narrow top, 4 = both wide.

#include "Pythia8/Pythia.h"
using namespace Pythia8;


//==========================================================================

int main() {

  // Include initial-state QED radiation or not.
  bool doQEDISR = true;

  // Only allow gamma* exchange to be able to define classic R ratio.
  bool gammaOnly = false;

  // Special comparison with Hoang et al. (overrides two switches above).
  bool compareHoang = false;

  // Number of events per model and energy point.
  // (More statistics needed for smooth behaviour, so this is start only.)
  int nEvent = 1000;

  // Scenarios. Common base parameters.
  constexpr int nca = 5;
  int topModelSel[nca] = { 0, 1, 3, 3, 2};
  double gammatGr[nca] = { 0.001, 0.001, 0.02, 1.32, 1.34};
  double mt              = 172.5;
  double gammat          = 1.34;
  double thresholdRegion = 10.;
  int    alphasOrder     = 2;
  double alphasValue     = 0.118;

   // Histogram and its range.
  Hist sigmaE[nca], ratioE[nca];
  int nEcm    = 100;
  double eMin = 340.;
  double eMax = 350.;

  // Overwrite as relevant for comparison with Hoang et al.
  if (compareHoang) {
    doQEDISR    = false;
    gammaOnly   = true;
    mt          = 175.05;
    gammat      = 1.43;
    gammatGr[3] = 1.41;
    gammatGr[4] = 1.43;
    nEcm        = 80;
    eMin        = 344.;
    eMax        = 352.;
  }

  // Loop over various mass smearing options.
  for (int ica = 0; ica < nca; ++ica) {
    int    topModel    = topModelSel[ica];
    double gammatGreen = gammatGr[ica];

    // Book histograms.
    sigmaE[ica].book( "sigma(energy)", nEcm, eMin, eMax);
    ratioE[ica].book( "R(energy)", nEcm, eMin, eMax);

    // Loop over collision energies.
    for (int iEcm = 0; iEcm < nEcm; ++iEcm) {
      double eCM = eMin + (iEcm + 0.5) * (eMax - eMin) / nEcm;

      // Create generator without showing header.
      Pythia pythia("../share/Pythia8/xmldoc", false);

      // Process and kinematics setup.
      pythia.readString("Top:ffbar2ttbar(s:gmZ) = on");
      if (gammaOnly) pythia.readString("WeakZ0:gmZmode = 1");
      pythia.readString("Beams:idA = -11");
      pythia.readString("Beams:idB = 11");
      pythia.settings.parm("Beams:eCM", eCM);
      pythia.readString("PhaseSpace:mHatMin = 300.");

      // Feed in desired values.
      pythia.settings.mode("TopThreshold:model", topModel);
      pythia.particleData.m0(6, mt);
      pythia.readString("6:doForceWidth = true");
      pythia.particleData.mWidth( 6, gammat);
      pythia.settings.parm("TopThreshold:tWidthGreen", gammatGreen);
      pythia.settings.parm("TopThreshold:thrRegion", thresholdRegion);
      pythia.settings.mode("TopThreshold:alphasOrder", alphasOrder);
      pythia.settings.parm("TopThreshold:alphasValue", alphasValue);

      // Switch off (most) code parts not relevant here.
      pythia.readString("PartonLevel:ISR = off");
      pythia.readString("PartonLevel:FSR = off");
      pythia.readString("PartonLevel:MPI = off");
      pythia.readString("HadronLevel:all = off");
      if (!doQEDISR) pythia.readString("PDF:lepton = off");

      // Reduce printout.
      pythia.readString("Init:showProcesses = off");
      pythia.readString("Init:showChangedSettings = off");
      pythia.readString("Init:showChangedParticleData = off");
      pythia.readString("Next:numberCount = 1000000");
      pythia.readString("Next:numberShowInfo = 0");
      pythia.readString("Next:numberShowProcess = 0");
      pythia.readString("Next:numberShowEvent = 0");

      // Loop to next energy if Pythia fails to initialize.
      if (!pythia.init()) continue;

      // Event loop. Generate events.
      for (int iEvent = 0; iEvent < nEvent; ++iEvent)
        if (!pythia.next()) continue;

      // Histogram cross section at given energy.
      double sigmaGen = 1e9 * pythia.info.sigmaGen();
      sigmaE[ica].fill( eCM, sigmaGen);

      // Normalize to the pointlike QED cross section.
      // Note: the sigma and R curves seem almost identical, but have
      // different dimensions: by coincidence the point cross section
      // times the squared top charge is surprisingly close to 1 pb.
      double sigmaPoint = GEVSQINV2MB * 4. * M_PI * pow2(pythia.info.alphaEM())
        / (3. * pow2(eCM));
      double sigmaNorm = pythia.info.sigmaGen() / sigmaPoint;
      ratioE[ica].fill( eCM, sigmaNorm);

    // End of energy and options loops.
    }
  }

  // Plot histograms.
  string linest[nca] = {
    "-,blue", "--,red", "-,black", "--,magenta", "-.,olive"};
  string captst[nca] = {
    "Born", "Coulomb", "narrow Green", "narrow top", "both broad"};
  HistPlot hpl("plot373");
  hpl.frame("fig373", "", "$E_{\\mathrm{CM}}$ (GeV)",
    "$\\sigma(E_{\\mathrm{CM}})$ (pb)", 6.4, 4.8);
  for (int ica = 0; ica < nca; ++ica)
    hpl.add( sigmaE[ica], linest[ica], captst[ica]);
  hpl.plot();
  hpl.frame("", "", "$E_{\\mathrm{CM}}$ (GeV)",
    "$R(E_{\\mathrm{CM}})$", 6.4, 4.8);
  for (int ica = 0; ica < nca; ++ica)
    hpl.add( ratioE[ica], linest[ica], captst[ica]);
  hpl.plot();

  // Done.
  return 0;
}
