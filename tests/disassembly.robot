*** Settings ***
Documentation     Regression test suite to protect compilation output and optimisation
Resource          resources/project.resource
Resource          resources/assembly.resource
Test Template     Check Disassembly


*** Keywords ***
Check Disassembly
    [Documentation]         Check that the disassembly of a symbol is as expected
    [Arguments]             ${symbol}    ${platform}    ${variant}
    ${expected_output} =    Get Expected ${symbol} Disassembly On ${platform} Platform For ${variant}
    ${actual_output} =      Disassemble ${symbol} from ${InstallDir}${/}${platform}${/}bin${/}app-${variant}.elf
    Should Be Equal         ${actual_output}    ${expected_output}    Compilation output for ${symbol} is not as expected    values=False


*** Test Cases ***                                                          SYMBOL                                          PLATFORM        VARIANT
Test Simple Register Read For Direct Model                                  simple_register_read                            ${PLATFORM}     direct
Test Simple Register Write For Direct Model                                 simple_register_write                           ${PLATFORM}     direct
Test Simple Field Read For Direct Model                                     simple_field_read                               ${PLATFORM}     direct
Test Simple Field Write For Direct Model                                    simple_field_write                              ${PLATFORM}     direct
Test Register Read Using Register Value Type For Direct Model               register_read_using_register_value_type         ${PLATFORM}     direct
Test Register Write Using Register Value Type For Direct Model              register_write_using_register_value_type        ${PLATFORM}     direct
Test Simple Group Register Read For Direct Model                            simple_group_register_read                      ${PLATFORM}     direct
Test Simple Group Register Write For Direct Model                           simple_group_register_write                     ${PLATFORM}     direct
Test Group Register Read Using Register Value Type For Direct Model         group_register_read_using_register_value_type   ${PLATFORM}     direct
Test Group Register Write Using Register Value Type For Direct Model        group_register_write_using_register_value_type  ${PLATFORM}     direct
Test Register Value Type Access For Direct Model                            register_value_type_access                      ${PLATFORM}     direct
Test Iterate Over Group Register For Direct Model                           iterate_over_group_register                     ${PLATFORM}     direct

Test Simple Register Read For InDirect Model                                simple_register_read                            ${PLATFORM}     indirect
Test Simple Register Write For InDirect Model                               simple_register_write                           ${PLATFORM}     indirect
Test Register Read Using Register Value Type For InDirect Model             register_read_using_register_value_type         ${PLATFORM}     indirect
Test Register Write Using Register Value Type For InDirect Model            register_write_using_register_value_type        ${PLATFORM}     indirect
Test Simple Group Register Read For InDirect Model                          simple_group_register_read                      ${PLATFORM}     indirect
Test Simple Group Register Write For InDirect Model                         simple_group_register_write                     ${PLATFORM}     indirect
Test Group Register Read Using Register Value Type For InDirect Model       group_register_read_using_register_value_type   ${PLATFORM}     indirect
Test Group Register Write Using Register Value Type For InDirect Model      group_register_write_using_register_value_type  ${PLATFORM}     indirect
Test Register Value Type Access For InDirect Model                          register_value_type_access                      ${PLATFORM}     indirect
Test Iterate Over Group Register For InDirect Model                         iterate_over_group_register                     ${PLATFORM}     indirect
