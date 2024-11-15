include(${CMAKE_CURRENT_LIST_DIR}/armv7m.cmake)

string(CONCAT MCU_FLAGS
  "-mcpu=cortex-m4 "
  "-mthumb "
)

string(CONCAT C_FLAGS
  ${MCU_FLAGS}
)

string(CONCAT CXX_FLAGS
  ${MCU_FLAGS}
)

string(CONCAT ASM_FLAGS
  ${MCU_FLAGS}
  "-x assembler-with-cpp "
)

string(CONCAT LINKER_FLAGS
  "-Wl,--gc-sections "
  "-static "
  "-specs=nano.specs "
)

set(CMAKE_C_FLAGS_INIT ${C_FLAGS})
set(CMAKE_CXX_FLAGS_INIT ${CXX_FLAGS})
set(CMAKE_ASM_FLAGS_INIT ${ASM_FLAGS})
set(CMAKE_EXE_LINKER_FLAGS_INIT ${LINKER_FLAGS})
set(CMAKE_MODULE_LINKER_FLAGS_INIT ${LINKER_FLAGS})
set(CMAKE_SHARED_LINKER_FLAGS_INIT ${LINKER_FLAGS})

set(DRAL_TEST_PLATFORM "cortex-m4")
