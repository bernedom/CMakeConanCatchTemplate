# CMakeConanCatchTemplate
A template repository to illustrate set up of a CMake project with close integration of conan and catch2 for unit testing. This setup configures [Conan](https://conan.io) as a [CMake dependency provider](https://dominikberner.ch/conan-as-cmake-dependency-provider/) in the `CMakePresets.json` and uses [Catch2](https://github.com/catchorg/Catch2) as test framework.

This project is intended as a template to get you started with a simple CMake setup that includes testing with Catch2 and Conan as a dependency provider. It is not intended to be a full-fledged project template, but rather a starting point for your own project. It contains a simple example library and test suite to illustrate the setup.

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

### Recommended VS Code Extensions

* [CMake Tools](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cmake-tools)
* [Test Explorer UI](https://marketplace.visualstudio.com/items?itemName=hbenl.vscode-test-explorer)
  * Alternative [CMake Test Explorer](https://marketplace.visualstudio.com/items?itemName=fredericbonnet.cmake-test-adapter)
* Optional but recommended: [CMake language support](https://marketplace.visualstudio.com/items?itemName=twxs.cmake)
* [Clangd](https://marketplace.visualstudio.com/items?itemName=llvm-vs-code-extensions.vscode-clangd) or [C/C++](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools) for code completion and diagnostics
