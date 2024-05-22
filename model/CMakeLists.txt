add_library(dral_model INTERFACE)

target_include_directories(dral_model INTERFACE
  inc
)

add_library(dral::model ALIAS dral_model)

install(FILES
  inc/dral/bitfield_model.h
  inc/dral/group_address_policy.h
  inc/dral/layer_offset_policy.h
  inc/dral/register_model.h
  DESTINATION inc/regs
)
