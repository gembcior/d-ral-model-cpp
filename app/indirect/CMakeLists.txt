include(DralUtils)

dral_add_executable(app-indirect)

target_sources(app-indirect
  PRIVATE
    src/main.cpp
)

if(DRAL_TEST_PLATFORM STREQUAL "cortex-m4")
  set(CRT_LIB crt::cortex::m4)
elseif(DRAL_TEST_PLATFORM STREQUAL "cortex-m3")
  set(CRT_LIB crt::cortex::m3)
else()
  message(FATAL_ERROR "Unknown platform: ${DRAL_TEST_PLATFORM}")
endif()

target_link_libraries(app-indirect
  PRIVATE
    ${CRT_LIB}
    dral::regs::indirect
)
