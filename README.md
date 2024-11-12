# CMakeConanCatchTemplate
A template repository to illustrate set up of a CMake project with close integration of conan and catch2 for unit testing. This setup configures [Conan](https://conan.io) as a [CMake dependency provider](https://dominikberner.ch/conan-as-cmake-dependency-provider/) in the `CMakePresets.json` and uses [Catch2](https://github.com/catchorg/Catch2) as test framework.

This project is intended as a template to get you started with a simple CMake setup that includes testing with Catch2 and Conan as a dependency provider. It is not intended to be a full-fledged project template, but rather a starting point for your own project.

To use this template, the submodule [cmake-conan](https://github.com/conan-io/cmake-conan.git) has to be pulled with 
```bash

git submodule update --init --recursive

```

Once this is done the project can be configured and built with

```bash
cmake --preset=ci-ninja-debug
cmake --build ./build
```

Tests can be run using 

```bash
cd build
ctest -C Debug
```

## Prerequisites

* [Conan](https://conan.io) version 2.0 or higher
* [CMake](https://cmake.org) version 3.25 or higher
* [Catch2](https://github.com/catchorg/Catch2) version 3.7 or higher (this will be fetched automatically by conan)
* [Ninja](https://ninja-build.org) (optional, but recommended)
