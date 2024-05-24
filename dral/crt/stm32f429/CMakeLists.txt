add_library(crt_stm32f429 INTERFACE)

target_sources(crt_stm32f429
  INTERFACE
    startup.s
)

target_link_libraries(crt_stm32f429
  INTERFACE
    "-T ${CMAKE_CURRENT_SOURCE_DIR}/linker_script.ld"
)

set_target_properties(crt_stm32f429 PROPERTIES
  INTERFACE_LINK_DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/linker_script.ld
)

add_library(crt::stm32f429 ALIAS crt_stm32f429)
