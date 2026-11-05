# Loom

## Introduction

Loom is an Open Source, multi-platform framework for developing simple HTTP servers in C++. It provides a simple project application entry-point as well as platform-independent core types and functionality.

Loom is currently written primary in C++23.

## Getting Started

These instructions will get you a copy of the project up and running on your local machine for development and testing purposes.

### Prerequisites

* **CMake v3.15+** - found at [https://cmake.org/](https://cmake.org/)

* **C++ Compiler** - needs to support at least the **C++23** standard, i.e. *MSVC*,
*GCC*, *Clang*

> ***Note:*** *You might also need to be able to provide ***CMake*** a supported
[generator](https://cmake.org/cmake/help/latest/manual/cmake-generators.7.html).*

### Installing

#### Clone the repository

Start by cloning the repository.

```console
$ git clone https://github.com/msilva2203/Loom
$ cd Loom
```

#### Create a new project

After finishing getting a copy of the repository, create
a new directory in the `Projects/` directory, with the name of your project.  Edit
`CMakeLists.txt` to add your projects to the build process.

> Please, use the BasicServer sample project as a template until a proper project creation method is implemented. The project can be found in `Samples/BasicServer/`.

#### Project configuration

To configure and generate the native build system, simply run:

```console
$ cmake -S . -B Build
```

## Building the projects

After finishing installing the Loom framework and creating a project, build the projects by running:

```console
$ cmake --build Build
```

## Authors

* **Marco Silva** - [@msilva2203](https://github.com/msilva2203)

## License

The Loom source code is distributed under the [MIT license](https://opensource.org/license/mit). See [LICENSE.md](LICENSE.md). External libraries used by Loom are distributed under their own licenses.