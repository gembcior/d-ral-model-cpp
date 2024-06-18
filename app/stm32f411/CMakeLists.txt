include(DralUtils)

add_executable(stm32f411)

target_sources(stm32f411
  PRIVATE
    src/main.cpp
)

target_link_libraries(stm32f411
  PRIVATE
    crt::cortex::m4
    dral::stm32f411
)

generate_target_listing(stm32f411)
