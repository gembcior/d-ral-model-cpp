add_library(dral_stm32f429 INTERFACE)

target_include_directories(dral_stm32f429
  INTERFACE
    stm32f429
)

add_library(dral::stm32f429 ALIAS dral_stm32f429)
