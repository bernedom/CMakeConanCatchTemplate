cmake_minimum_required(VERSION 3.25)

project(CMakeConanCatchTemplate
        VERSION 1.0.0
        DESCRIPTION "CMake template to illustrate using Conan and Catch2 for integrated dependency management and testing"
        LANGUAGES CXX)

# Export compile commands for use with clangd
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Enable testing
include(CTest)

# find Catch2 - if configured Conan2 will be used as dependency provider
find_package(Catch2 REQUIRED)