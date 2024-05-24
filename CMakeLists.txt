cmake_minimum_required(VERSION 3.25)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake/modules)

set(CMAKE_TOOLCHAIN_FILE ${CMAKE_CURRENT_SOURCE_DIR}/cmake/toolchain/stm32f429.cmake CACHE PATH "Toolchain File" FORCE)

project(d-ral-model LANGUAGES CXX ASM)

set(CMAKE_BUILD_TYPE RelWithDebInfo CACHE STRING "Build type." FORCE)
set(CMAKE_INSTALL_PREFIX ${CMAKE_BINARY_DIR}/install CACHE PATH "Install path prefix." FORCE)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

include(DralUtils)
include(ProjectSettings)

if (NOT CPACK_PACKAGE_VERSION)
  set(CPACK_PACKAGE_VERSION "dev")
endif()

include(CPack)

add_subdirectory(model)
add_subdirectory(regs)
add_subdirectory(dral)
