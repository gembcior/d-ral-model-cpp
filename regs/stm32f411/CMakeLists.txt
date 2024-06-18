add_library(dral_stm32f411 INTERFACE)

add_library(dral::stm32f411 ALIAS dral_stm32f411)

target_include_directories(dral_stm32f411
  INTERFACE
    inc
)

target_link_libraries(dral_stm32f411
  INTERFACE
    dral::model
)
