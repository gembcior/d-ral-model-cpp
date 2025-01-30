![Logo](https://raw.githubusercontent.com/gembcior/d-ral-model-cpp/master/doc/logo.svg)

<h1 align="center">C++ model for D-RAL project</h1>

---

## What is it?
The C++ model that is required to use the [D-RAL](https://github.com/gembcior/d-ral) project.

As a standalone project, it is useless. See [D-RAL README](https://github.com/gembcior/d-ral/blob/main/README.md) and [DRAL Wiki](https://github.com/gembcior/d-ral/wiki) for more details.

## How to use it?
Every release contains a package with header files only and package for CMake. Choose the one that fits your needs.

### With CMake
Use FetchContent to download the package. Then the `dral::model` target will be available.

#### Latest release

```cmake
include(FetchContent)

FetchContent_Declare(dral_model
  URL https://github.com/gembcior/d-ral-model-cpp/releases/latest/download/d-ral-model-cmake.tar.gz
  EXCLUDE_FROM_ALL
)

FetchContent_MakeAvailable(dral_model)
```

#### Specific release

```cmake
include(FetchContent)

set(DRAL_MODEL_VERSION "v0.2.0")

FetchContent_Declare(dral_model
  URL https://github.com/gembcior/d-ral-model-cpp/releases/download/${DRAL_MODEL_VERSION}/d-ral-model-cmake.tar.gz
  EXCLUDE_FROM_ALL
)

FetchContent_MakeAvailable(dral_model)
```

### Header files only
Download the release package from the latest release or specific release.
Package contains only the header files. Copy them to your project.

#### Latest release

```
https://github.com/gembcior/d-ral-model-cpp/releases/latest/download/d-ral-model.tar.gz
```

#### Specific release

```
https://github.com/gembcior/d-ral-model-cpp/releases/download/v0.2.0/d-ral-model.tar.gz
```
