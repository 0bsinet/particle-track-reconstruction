cmake_minimum_required(VERSION 3.16)

project(ToyModel LANGUAGES CXX)

# C++ configuration
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Locate Pythia8
set(PYTHIA8_DIR "${CMAKE_SOURCE_DIR}/../pythia/pythia8318")

# Find HepMC3
find_package(HepMC3 REQUIRED)

# Create executable
add_executable(my_first_generator
    my_first_generator.cc
)

# Pythia8 headers
target_include_directories(my_first_generator PRIVATE
    ${PYTHIA8_DIR}/include
)

# HepMC3 headers
target_include_directories(my_first_generator PRIVATE
    ${HEPMC3_INCLUDE_DIR}
)

# Pythia8 library directory
target_link_directories(my_first_generator PRIVATE
    ${PYTHIA8_DIR}/lib
)

# Link dependencies
target_link_libraries(my_first_generator PRIVATE
    pythia8
    ${HEPMC3_LIBRARIES}
)

# Runtime library search path
set_target_properties(my_first_generator PROPERTIES
    BUILD_RPATH "${PYTHIA8_DIR}/lib"
)
