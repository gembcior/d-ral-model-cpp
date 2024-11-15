add_library(dral_regs INTERFACE)

add_library(dral::regs ALIAS dral_regs)

target_include_directories(dral_regs
  INTERFACE
    inc
)

target_link_libraries(dral_regs
  INTERFACE
    dral::model
)
