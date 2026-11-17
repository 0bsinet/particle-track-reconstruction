/**
 * @file OddFatrasSimulation.cc
 * @brief Standalone HL-LHC fast tracking simulation using Pythia8, OpenDataDetector, and Fatras.
 *
 * Physics & Detector Setup:
 *   - Hard process : pp -> ttbar at sqrt(s) = 14 TeV (1 per event)
 *   - Pile-up      : SoftQCD minimum-bias events (Poisson <mu> = 200)
 *   - Vertex spread: Gaussian (12.5 um x 12.5 um x 50.0 mm, dt = 0 ns)
 *   - Detector     : OpenDataDetector (DD4hep XML + ROOT material map) in a 2 T Bz field
 *
 * Sequencer Whiteboard Flow:
 *   [Reader]    EventGenerator    --> "mc_truth_particles"
 *   [Algorithm] FatrasSimulation  --> "sim_particles_initial", "sim_particles_final", "sim_hits"
 *   [Writer]    CsvParticleWriter <-- "sim_particles_initial" (writes ./hllhc_cpp_output/particles.csv)
 *
 * Runtime Prerequisites:
 *   export ODD_DIR=/path/to/acts/thirdparty/OpenDataDetector
 *   export LD_LIBRARY_PATH=/path/to/acts/install/lib:$LD_LIBRARY_PATH
 */

#include <iostream>
#include <memory>
#include <vector>
#include <cstdlib>
#include <string>

// ACTS Core 
#include "Acts/Definitions/Units.hpp"
#include "Acts/MagneticField/ConstantBField.hpp"
#include "Acts/Geometry/GeometryContext.hpp"
#include "Acts/Geometry/TrackingGeometry.hpp"
#include "Acts/Utilities/Logger.hpp"

// ACTS Examples Framework & Random Numbers
#include "ActsExamples/Framework/RandomNumbers.hpp"
#include "ActsExamples/Framework/Sequencer.hpp"

// Generators
#include "ActsExamples/Generators/EventGenerator.hpp"
#include "ActsExamples/Generators/MultiplicityGenerators.hpp"
#include "ActsExamples/Generators/Pythia8ProcessGenerator.hpp"
#include "ActsExamples/Generators/VertexGenerators.hpp"

// OpenDataDetector / DD4hep & Material
#include "ActsExamples/DD4hepDetector/DD4hepDetector.hpp"
#include "ActsExamples/Io/Root/RootMaterialDecorator.hpp"

// Fatras Simulation & CSV Output
#include "ActsExamples/Fatras/FatrasSimulation.hpp"
#include "ActsExamples/Io/Csv/CsvParticleWriter.hpp"


int main() {
  using namespace Acts::UnitConstants;

  // Initialize the ACTS Execution Sequencer
  ActsExamples::Sequencer::Config seqConfig; 
  seqConfig.events = 10; // Number of events to run
  seqConfig.numThreads = 1;
  ActsExamples::Sequencer sequencer(seqConfig);

  //Shared random number service required by EventGenerator and Fatras
  ActsExamples::RandomNumbers::Config rndCfg;
  rndCfg.seed = 42;
  auto randomNumbers = std::make_shared<ActsExamples::RandomNumbers>(rndCfg);

  // Configure Pythia8 for the Hard Process 
  ActsExamples::Pythia8ProcessGenerator::Config hardProcessConfig;
  hardProcessConfig.pdgBeam0 = Acts::PdgParticle::eProton;
  hardProcessConfig.pdgBeam1 = Acts::PdgParticle::eProton;
  hardProcessConfig.cmsEnergy = 14000.0 * GeV;
  hardProcessConfig.settings = {
    "Top:gg2ttbar = on",
    "Top:qqbar2ttbar = on",
    "Next:numberShowInfo = 0",
    "Next:numberShowProcess = 0"
  };

  // Configure Pythia8 for Pile-up
  ActsExamples::Pythia8ProcessGenerator::Config pileupConfig;
  pileupConfig.pdgBeam0 = Acts::PdgParticle::eProton;
  pileupConfig.pdgBeam1 = Acts::PdgParticle::eProton;
  pileupConfig.cmsEnergy = 14000.0 * GeV;
  pileupConfig.settings = {
    "SoftQCD:all = on"
  };

  // Configure the Gaussian Luminous Region Vertex Smearing
  ActsExamples::GaussianVertexGenerator::Config vertexConfig;
  vertexConfig.stddev = {12.5 * um, 12.5 * um, 50.0 * mm, 0.0 * ns};

  // Combine Hard Process and Pile-Up into an Event Generator
  ActsExamples::EventGenerator::Config evGenConfig;
  evGenConfig.outputParticles = "mc_truth_particles";
  evGenConfig.randomNumbers = randomNumbers;

  // Add Hard Process component (exactly 1 per event)
  evGenConfig.generators.push_back({
    std::make_shared<ActsExamples::FixedMultiplicityGenerator>(1),
    std::make_shared<ActsExamples::GaussianVertexGenerator>(vertexConfig),
    std::make_shared<ActsExamples::Pythia8Generator>(hardProcessConfig, Acts::Logging:INFO)
  });

  // Add Pile-up component (Poisson distribution center at mu = 200)
  evGenConfig.generators.push_back({
    std::make_shared<ActsExamples::PoissonMultiplicityGenerator>(200.0),
    std::make_shared<ActsExamples::GaussianVertexGenerator>(vertexConfig),
    std::make_shared<ActsExamples::Pythia8ProcessGenerator>(pileupConfig, Acts::Logging::INFO)
  });

  sequencer.addReader(std::make_shared<ActsExamples::EventGenerator>(evGenConfig, Acts::Logging::INFO));

  // Initialize OpenDataDetector Geometry natively via DD4hepDetector
  const char* oddDirEnv = std::getenv("ODD_DIR");
  std::string oddDir = 
    oddDirEnv ? oddDirEnv: "./OpenDataDetector";

  ActsExamples::RootMaterialDecorator::Config matCfg;
  matCfg.fileName = oddDir + "/data/odd-material-maps.root";
  auto materialDecorator = std::make_shared<ActsExamples::RootMaterialDecorator>(matCfg, Acts::Logging::INFO);

  ActsExamples::DD4hep::DD4hepDetector::Config dd4hepCfg;
  dd4hepCfg.logLevel = Acts::Logging::INFO;
  dd4hepCfg.dd4hepLogLevel = Acts::Logging::WARNING;
  dd4hepCfg.xmlFileNames = {oddDir + "/xml/OpenDataDetector.xml"};
  dd4hepCfg.materialDecorator = materialDecorator;

  // Keep 'detector' alive for the entire sequencer.run() call
  auto detector = std::make_shared<ActsExamples::DD4hep::DD4hepDetector>(dd4hepCfg);
  std::shared_ptr<const Acts::TrackingGeometry> trackingGeometry = detector->trackingGeometry();

  // Define magnetic field and tracking simulation (Fatras)
  auto bField = std::make_shared<Acts::ConstantBField>(Acts::Vector3(0.0, 0.0, 2.0 * T));

  ActsExamples::FatrasSimulation::Config simConfig;
  simConfig.inputParticles = "mc_truth_particles";
  simConfig.outputParticlesInitial = "sim_particles_initial";
  simConfig.outputParticlesFinal = "sim_particles_final";
  simConfig.outputSimHits = "sim_hits";
  simConfig.trackingGeometry = trackingGeometry;
  simConfig.magneticField = bField;
  simConfig.randomNumbers = randomNumbers;

  sequencer.addAlgorithm(std::make_shared<ActsExamples::FatrasSimulation>(simConfig, Acts::Logging::INFO));

  // Write the simlated hits to CSV
  ActsExamples::CsvParticleWriter::Config writerConfig;
  writerConfig.inputParticles = "sim_particles_initial";
  writerConfig.outputDir = "./hllhc_cpp_output";
  writerConfig.filename = "particles.csv";

  sequencer.addWriter(std::make_shared<ActsExamples::CsvParticleWriter>(writerConfig, Acts::Logging::INFO));

  // Execute the full simulation pipeline
  return sequencer.run();
}