
macro(GET_TARGET_OUTPUT_FILE TARGET)
  get_target_property(TARGET_SUFFIX ${TARGET} SUFFIX)
  set(TARGET_OUTPUT_FILE ${TARGET})
  if (TARGET_SUFFIX)
    string(APPEND TARGET_OUTPUT_FILE ${TARGET_SUFFIX})
  endif()
endmacro()

function(GENERATE_TARGET_LISTING TARGET)
  get_target_output_file(${TARGET})
  add_custom_command(TARGET ${TARGET}
    POST_BUILD
    COMMAND ${TOOLCHAIN_OBJDUMP} -h -d -C ${TARGET_OUTPUT_FILE} > ${TARGET}.lst
  )
  # file_install(${TARGET} ${CMAKE_CURRENT_BINARY_DIR}/${TARGET}.lst)
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
