add_library(crt_cortex_m3 INTERFACE)

target_sources(crt_cortex_m3
  INTERFACE
    startup.cpp
    handlers.cpp
)

target_link_libraries(crt_cortex_m3
  INTERFACE
    "-T ${CMAKE_CURRENT_SOURCE_DIR}/linker_script.ld"
)

set_target_properties(crt_cortex_m3 PROPERTIES
  INTERFACE_LINK_DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/linker_script.ld
)

add_library(crt::cortex::m3 ALIAS crt_cortex_m3)
