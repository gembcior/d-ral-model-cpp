add_library(dral_regs_direct INTERFACE)
add_library(dral::regs::direct ALIAS dral_regs_direct)
target_include_directories(dral_regs_direct
  INTERFACE
    direct
)
target_link_libraries(dral_regs_direct
  INTERFACE
    dral::model
)

add_library(dral_regs_indirect INTERFACE)
add_library(dral::regs::indirect ALIAS dral_regs_indirect)
target_include_directories(dral_regs_indirect
  INTERFACE
    indirect
)
target_link_libraries(dral_regs_indirect
  INTERFACE
    dral::model
)
