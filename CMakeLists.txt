cmake_minimum_required(VERSION 3.25)

project(CMakeConanCatchTemplate
        VERSION 1.0.0
        DESCRIPTION "CMake template to illustrate using Conan and Catch2 for integrated dependency management and testing"
        LANGUAGES CXX)

# Export compile commands for use with clangd
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# An example library to be used in the test - this could be a library you are developing
add_library(example_lib STATIC src/example.cpp)
target_include_directories(example_lib PUBLIC include)
target_compile_features(example_lib PUBLIC cxx_std_17)

# Enable testing
include(CTest)

# find Catch2 - if configured Conan2 will be used as dependency provider
find_package(Catch2 REQUIRED)

if(Catch2_FOUND AND BUILD_TESTING)
        add_subdirectory(test)
endif()
