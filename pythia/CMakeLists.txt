cmake_minimum_required(VERSION 3.18)
project(OddFatrasSimulation LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

find_package(Acts REQUIRED COMPONENTS Core PluginDD4hep)
find_package(DD4hep REQUIRED)
find_package(ROOT REQUIRED COMPONENTS Core RIO Tree)
find_package(Pythia8 REQUIRED)

add_executable(OddFatrasSimulation OddFatrasSimulation.cc)

target_link_libraries(OddFatrasSimulation
  PRIVATE
    Acts::Core
    Acts::PluginDD4hep
    ActsExamplesFramework
    ActsExamplesDetectorDD4hep
    ActsExamplesGeneratorsPythia8
    ActsExamplesFatras
    ActsExamplesIoCsv
    ActsExamplesIoRoot
)