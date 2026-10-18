// main428.cc is a part of the PYTHIA event generator.
// Copyright (C) 2026 Torbjorn Sjostrand.
// PYTHIA is licenced under the GNU GPL v2 or later, see COPYING for details.
// Please respect the MCnet Guidelines, see GUIDELINES for details.

// Authors: Christian Bierlich <christian.bierlich@fysik.lu.se>

// Keywords: heavy ions; nuclear geometry; validation;

// Closure tests for the built-in nuclear geometry models. The tests compare
// sampled one-body radial distributions with their analytic truth shapes.

#include "Pythia8/Pythia.h"
#include "Pythia8/HINucleusModel.h"

using namespace Pythia8;

//--------------------------------------------------------------------------

bool initModel(NucleusModel& model, Pythia& pythia, int id) {
  Info& info = const_cast<Info&>(pythia.info);
  model.initPtr(id, true, info);
  return model.init();
}

//--------------------------------------------------------------------------

pair<Hist, Hist> runClosure(string name, function<double()> sampleRadius,
  function<double(double)> truthShape, double rMax, int nBin, int nSample) {

  Hist sampled(name, nBin, 0., rMax);
  Hist truth(name, nBin, 0., rMax);

  for (int iSample = 0; iSample < nSample; ++iSample)
    sampled.fill(sampleRadius());

  for (int iBin = 1; iBin <= truth.getBinNumber(); ++iBin) {
    double rMid = truth.getBinCenter(iBin);
    truth.fill(rMid, max(0., truthShape(rMid)));
  }

  truth.normalizeIntegral();
  sampled.normalizeIntegral();
  return make_pair(truth, sampled);
}


int main() {

  // We need a Pythia object for reading settings and passing
  // info pointer from.
  Pythia pythia("", false);
  // We don't need to initialize the full object, just the
  // random number generator
  pythia.rndm.init(31415);

  // Common settings for all closures
  pythia.readString("HeavyIonA:HardCore = off");
  pythia.readString("HeavyIonB:HardCore = off");
  pythia.readString("HeavyIonA:GaussHardCore = off");
  pythia.readString("HeavyIonB:GaussHardCore = off");

  int nSample = 100000;
  int nBin = 80;

  vector<pair<Hist, Hist> > results;

  // Closure test for GLISSANDO, a selection of different nuclei
  vector<pair<int, string> > glissandoNuclei = {{1000290630, "63Cu"},
    {1000541290, "129Xe"}, {1000791970, "197Au"}, {1000822080, "208Pb"}};
  for (auto n : glissandoNuclei) {
    GLISSANDOModel g;
    initModel(g, pythia, n.first);
    results.push_back(runClosure(
      "GLISSANDO "+n.second,
      [&](){ return g.generateNucleon().pAbs();},
      [&](double r) {
        return r * r / (1. + exp((r - g.R()) / g.a())); },
      g.R() + 20. * g.a(), nBin, nSample));
  }

  // Closure test for Harmonic Oscillator Shell, a selection of light nuclei.
  vector<pair<int, string> > hoShellNuclei = {{1000020040, "4He"},
    {1000030080, "8Li"}, {1000060120, "12C"}, {1000080160, "16O"}};
  for (auto n : hoShellNuclei) {
    HOShellModel h;
    initModel(h, pythia, n.first);
    results.push_back(runClosure(
      "HO shell "+n.second,
      [&](){ return h.generateNucleon().pAbs();},
      [&](double r) {
        return r * r * (1. + (h.A() - 4.) / 6. * r * r / h.C2())
          * exp(-r * r / h.C2()); },
      6.5 * sqrt(h.C2()), nBin, nSample));
  }

  // Closure test for Gaussian, two light nuclei.
  vector<pair<int, string> > gaussianNuclei = {{1000020040, "4He"},
    {1000080160, "16O"}};
  for (auto n : gaussianNuclei) {
    GaussianModel gaussian;
    initModel(gaussian, pythia, n.first);
    results.push_back(runClosure(
      "Gaussian "+n.second,
      [&](){ return gaussian.generateNucleon().pAbs();},
      [&](double r) {
        return exp(-0.5 * pow2(r / gaussian.chargeRadius())); },
      5.5 * gaussian.chargeRadius(), nBin, nSample));
  }

  // Closure test for Hulthen, for deuterons.
  HulthenModel hulthen;
  initModel(hulthen, pythia, 1000010020);
  results.push_back(runClosure(
    "Hulthen deuteron",
    [&](){
      vector<Nucleon> nucleons = hulthen.generate();
      return (nucleons[1].nPos() - nucleons[0].nPos()).pAbs();},
    [&](double r) {
      return exp(-2. * hulthen.a() * r) + exp(-2. * hulthen.b() * r)
        - 2. * exp(-(hulthen.a() + hulthen.b()) * r); },
    12. / hulthen.a(), nBin, nSample));

  // Write a matplotlib script for visual inspection of each closure.
  HistPlot hpl("plot428");
  for (int iResult = 0; iResult < int(results.size()); ++iResult) {
    hpl.frame(iResult == 0 ? "fig428" : "",
      results[iResult].first.getTitle() + " radial closure",
      "$r$ (fm)", "P(r)", 8.0, 5.4);
    hpl.add(results[iResult].second, "e,blue", "sampled");
    hpl.add(results[iResult].first, "-,red", "truth");
    hpl.plot();
  }

  cout << "\n Plot script written to plot428.py." << endl;
  return 0;
}
