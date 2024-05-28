set(CMAKE_SYSTEM_NAME Generic)
set(CMAKE_SYSTEM_PROCESSOR arm)

set(CMAKE_TRY_COMPILE_TARGET_TYPE STATIC_LIBRARY)

find_path(GNU_ARM_EMBEDDED_TOOLCHAIN
  NAMES
    "arm-none-eabi-gcc"
    "arm-none-eabi-g++"
  DOC "GNU Arm Embedded Toolchain"
  PATHS
    /usr/lib/arm-none-eabi
)

set(CMAKE_C_COMPILER "${GNU_ARM_EMBEDDED_TOOLCHAIN}/arm-none-eabi-gcc")
set(CMAKE_CXX_COMPILER "${GNU_ARM_EMBEDDED_TOOLCHAIN}/arm-none-eabi-g++")
set(CMAKE_ASM_COMPILER "${GNU_ARM_EMBEDDED_TOOLCHAIN}/arm-none-eabi-gcc")
set(CMAKE_AR "${GNU_ARM_EMBEDDED_TOOLCHAIN}/arm-none-eabi-ar")
set(CMAKE_RANLIB "${GNU_ARM_EMBEDDED_TOOLCHAIN}/arm-none-eabi-ranlib")
set(TOOLCHAIN_OBJDUMP "${GNU_ARM_EMBEDDED_TOOLCHAIN}/arm-none-eabi-objdump")

# See https://cmake.org/cmake/help/latest/manual/cmake-toolchains.7.html
set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_PACKAGE ONLY)
