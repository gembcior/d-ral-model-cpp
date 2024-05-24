add_executable(read)

target_sources(read
  PRIVATE
    src/main.cpp
)

target_link_libraries(read
  PRIVATE
    crt::stm32f429
    dral::stm32f429
)
