cmake_minimum_required(VERSION 3.25)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake/modules)

set(CMAKE_CXX_STANDARD 20)

project(d-ral-model LANGUAGES CXX)

include(DralUtils)
include(ProjectSettings)

if (NOT CPACK_PACKAGE_VERSION)
  set(CPACK_PACKAGE_VERSION "dev")
endif()

include(CPack)

add_subdirectory(model)
add_subdirectory(regs)
add_subdirectory(dral)
