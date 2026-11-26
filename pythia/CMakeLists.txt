cmake_minimum_required(VERSION 3.20)
project(OddFatrasSimulation
  VERSION 1.0
  LANGUAGES CXX
)

# The checked-out ACTS revision uses C++23.
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# ACTS Examples targets are build-only targets, so build them from the local
# ACTS checkout instead of trying to find them in an installed Acts package.
set(ACTS_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/../acts/acts" CACHE PATH
    "Path to the ACTS source checkout")
if(NOT EXISTS "${ACTS_SOURCE_DIR}/CMakeLists.txt")
  message(FATAL_ERROR
    "ACTS source not found at '${ACTS_SOURCE_DIR}'. Clone ACTS into ../acts/acts "
    "or configure with -DACTS_SOURCE_DIR=/path/to/acts.")
endif()

set(ACTS_BUILD_PLUGIN_DD4HEP ON CACHE BOOL "" FORCE)
set(ACTS_BUILD_FATRAS ON CACHE BOOL "" FORCE)
set(ACTS_BUILD_ODD ON CACHE BOOL "" FORCE)
set(ACTS_BUILD_EXAMPLES ON CACHE BOOL "" FORCE)
set(ACTS_BUILD_EXAMPLES_DD4HEP ON CACHE BOOL "" FORCE)
set(ACTS_BUILD_EXAMPLES_PYTHIA8 ON CACHE BOOL "" FORCE)
set(ACTS_BUILD_EXAMPLES_ROOT ON CACHE BOOL "" FORCE)
set(ACTS_BUILD_UNITTESTS OFF CACHE BOOL "" FORCE)
set(ACTS_BUILD_INTEGRATIONTESTS OFF CACHE BOOL "" FORCE)
set(ACTS_BUILD_EXAMPLES_UNITTESTS OFF CACHE BOOL "" FORCE)
set(ACTS_BUILD_PYTHON_BINDINGS OFF CACHE BOOL "" FORCE)
set(ACTS_BUILD_ANALYSIS_APPS OFF CACHE BOOL "" FORCE)

add_subdirectory("${ACTS_SOURCE_DIR}" "${CMAKE_BINARY_DIR}/acts")

add_executable(OddFatrasSimulation OddFatrasSimulation.cc)

target_link_libraries(OddFatrasSimulation
  PRIVATE
    Acts::Core
    Acts::PluginDD4hep
    Acts::PluginRoot

    # ACTS Examples targets
    ActsExamplesFramework
    ActsExamplesDetectorDD4hep
    ActsExamplesGeneratorsPythia8
    ActsExamplesFatras
    ActsExamplesIoCsv
    ActsExamplesIoRoot
    ActsExamplesIoHepMC3
)

# Compiler warnings
target_compile_options(OddFatrasSimulation PRIVATE
  -Wall
  -Wextra
  -Wpedantic
)

# Output directory
set_target_properties(OddFatrasSimulation PROPERTIES
  RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
)
