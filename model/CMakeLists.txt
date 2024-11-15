add_library(dral_model INTERFACE)

target_include_directories(dral_model INTERFACE
  inc
)

add_library(dral::model ALIAS dral_model)
