function(GENERATE_TARGET_LISTING TARGET)
  if(NOT CMAKE_OBJDUMP)
    message(WARNING "CMAKE_OBJDUMP size not found or not in scope. Listing for ${TARGET} will not be generated.")
    return()
  endif()

  add_custom_command(
    TARGET ${TARGET}
    POST_BUILD
    COMMENT "Generating list file for ${TARGET}"
    COMMAND ${CMAKE_OBJDUMP} -h -d -C "$<TARGET_FILE:${TARGET}>" > ${CMAKE_CURRENT_BINARY_DIR}/${TARGET}.lst
    BYPRODUCTS ${CMAKE_CURRENT_BINARY_DIR}/${TARGET}.lst
  )
endfunction()

function(ADD_C_COMPILE_OPTIONS)
  foreach (option ${ARGN})
    list(APPEND c_options $<$<COMPILE_LANGUAGE:C>:${option}>)
  endforeach()
  add_compile_options(${c_options})
endfunction()

function(ADD_CXX_COMPILE_OPTIONS)
  foreach (option ${ARGN})
    list(APPEND cxx_options $<$<COMPILE_LANGUAGE:CXX>:${option}>)
  endforeach()
  add_compile_options(${cxx_options})
endfunction()

function(ADD_ASM_COMPILE_OPTIONS)
  foreach (option ${ARGN})
    list(APPEND asm_options $<$<COMPILE_LANGUAGE:ASM>:${option}>)
  endforeach()
  add_compile_options(${asm_options})
endfunction()

find_program(CMAKE_SIZE NAMES ${CMAKE_CXX_COMPILER_TARGET}-size size HINTS ${CMAKE_SYSROOT})

function(PRINT_TARGET_SIZE TARGET)
  if(NOT CMAKE_SIZE)
    message(WARNING "CMAKE_SIZE size not found or not in scope. Size of ${TARGET} will not be printed.")
    return()
  endif()

  add_custom_command(
    TARGET ${TARGET}
    POST_BUILD
    COMMENT "Size of ${TARGET}"
    COMMAND ${CMAKE_SIZE} --format=berkeley "$<TARGET_FILE:${TARGET}>"
    )
endfunction()

function(DRAL_ADD_EXECUTABLE TARGET)
  add_executable(${TARGET})

  set_property(TARGET ${TARGET} PROPERTY SUFFIX .elf)
  generate_target_listing(${TARGET})
  print_target_size(${TARGET})

  install(TARGETS ${TARGET} OPTIONAL)
endfunction()
