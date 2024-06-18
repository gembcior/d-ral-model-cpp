cmake_minimum_required(VERSION 3.25)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake/modules)

project(d-ral-model LANGUAGES CXX ASM)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

include(DralUtils)
include(ProjectSettings)

if (NOT CPACK_PACKAGE_VERSION)
  set(CPACK_PACKAGE_VERSION "dev")
endif()

include(CPack)

include(DralUtils)

add_compile_options(
  "-Wall"
  "-Werror"
  "-Wextra"
  "-Wshadow"
  "-Wundef"
  "-Wconversion"
  "-Wno-unused-parameter"
  "-Wdouble-promotion"
  "-Wformat=2"
  "-Wformat-overflow"
  "-Wformat-truncation"
)

add_compile_options(
  "-fno-common"
  "-fno-exceptions"
  "-fno-unwind-tables"
  "-ffunction-sections"
  "-fdata-sections"
  "-fstack-usage"
  "-ffast-math"

  "-fno-builtin"
)
add_cxx_compile_options(
  "-fno-rtti"
  "-fno-threadsafe-statics"
  "-fno-use-cxa-atexit"
)
add_link_options(
  "-Wl,--no-warn-rwx-segment"
)

add_subdirectory(model)
add_subdirectory(regs)
add_subdirectory(app)
add_subdirectory(crt)
