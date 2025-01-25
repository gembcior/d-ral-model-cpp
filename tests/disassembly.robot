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


*** Test Cases ***                                                                      SYMBOL                                          PLATFORM    VARIANT
Test Simple Register Read On Cortex-M3 For Direct Model                                 simple_register_read                            cortex-m3   direct
Test Simple Register Write On Cortex-M3 For Direct Model                                simple_register_write                           cortex-m3   direct
Test Simple Field Read On Cortex-M3 For Direct Model                                    simple_field_read                               cortex-m3   direct
Test Simple Field Write On Cortex-M3 For Direct Model                                   simple_field_write                              cortex-m3   direct
Test Register Read Using Register Value Type On Cortex-M3 For Direct Model              register_read_using_register_value_type         cortex-m3   direct
Test Register Write Using Register Value Type On Cortex-M3 For Direct Model             register_write_using_register_value_type        cortex-m3   direct
Test Simple Group Register Read On Cortex-M3 For Direct Model                           simple_group_register_read                      cortex-m3   direct
Test Iterate Over Group Register On Cortex-M4 For InDirect Model                        iterate_over_group_register                     cortex-m4   indirect
Test Simple Group Register Write On Cortex-M3 For Direct Model                          simple_group_register_write                     cortex-m3   direct
Test Group Register Read Using Register Value Type On Cortex-M3 For Direct Model        group_register_read_using_register_value_type   cortex-m3   direct
Test Group Register Write Using Register Value Type On Cortex-M3 For Direct Model       group_register_write_using_register_value_type  cortex-m3   direct
Test Register Value Type Access On Cortex-M3 For Direct Model                           register_value_type_access                      cortex-m3   direct
Test Iterate Over Group Register On Cortex-M3 For Direct Model                          iterate_over_group_register                     cortex-m3   direct

Test Simple Register Read On Cortex-M3 For InDirect Model                               simple_register_read                            cortex-m3   indirect
Test Simple Register Write On Cortex-M3 For InDirect Model                              simple_register_write                           cortex-m3   indirect
Test Register Read Using Register Value Type On Cortex-M3 For InDirect Model            register_read_using_register_value_type         cortex-m3   indirect
Test Register Write Using Register Value Type On Cortex-M3 For InDirect Model           register_write_using_register_value_type        cortex-m3   indirect
Test Simple Group Register Read On Cortex-M3 For InDirect Model                         simple_group_register_read                      cortex-m3   indirect
Test Simple Group Register Write On Cortex-M3 For InDirect Model                        simple_group_register_write                     cortex-m3   indirect
Test Group Register Read Using Register Value Type On Cortex-M3 For InDirect Model      group_register_read_using_register_value_type   cortex-m3   indirect
Test Group Register Write Using Register Value Type On Cortex-M3 For InDirect Model     group_register_write_using_register_value_type  cortex-m3   indirect
Test Register Value Type Access On Cortex-M3 For InDirect Model                         register_value_type_access                      cortex-m3   indirect
Test Iterate Over Group Register On Cortex-M3 For InDirect Model                        iterate_over_group_register                     cortex-m3   indirect

Test Simple Register Read On Cortex-M4 For Direct Model                                 simple_register_read                            cortex-m4   direct
Test Simple Register Write On Cortex-M4 For Direct Model                                simple_register_write                           cortex-m4   direct
Test Simple Field Read On Cortex-M4 For Direct Model                                    simple_field_read                               cortex-m4   direct
Test Simple Field Write On Cortex-M4 For Direct Model                                   simple_field_write                              cortex-m4   direct
Test Register Read Using Register Value Type On Cortex-M4 For Direct Model              register_read_using_register_value_type         cortex-m4   direct
Test Register Write Using Register Value Type On Cortex-M4 For Direct Model             register_write_using_register_value_type        cortex-m4   direct
Test Simple Group Register Read On Cortex-M4 For Direct Model                           simple_group_register_read                      cortex-m4   direct
Test Simple Group Register Write On Cortex-M4 For Direct Model                          simple_group_register_write                     cortex-m4   direct
Test Group Register Read Using Register Value Type On Cortex-M4 For Direct Model        group_register_read_using_register_value_type   cortex-m4   direct
Test Group Register Write Using Register Value Type On Cortex-M4 For Direct Model       group_register_write_using_register_value_type  cortex-m4   direct
Test Register Value Type Access On Cortex-M4 For Direct Model                           register_value_type_access                      cortex-m4   direct
Test Iterate Over Group Register On Cortex-M4 For Direct Model                          iterate_over_group_register                     cortex-m4   direct

Test Simple Register Read On Cortex-M4 For InDirect Model                               simple_register_read                            cortex-m4   indirect
Test Simple Register Write On Cortex-M4 For InDirect Model                              simple_register_write                           cortex-m4   indirect
Test Register Read Using Register Value Type On Cortex-M4 For InDirect Model            register_read_using_register_value_type         cortex-m4   indirect
Test Register Write Using Register Value Type On Cortex-M4 For InDirect Model           register_write_using_register_value_type        cortex-m4   indirect
Test Simple Group Register Read On Cortex-M4 For InDirect Model                         simple_group_register_read                      cortex-m4   indirect
Test Simple Group Register Write On Cortex-M4 For InDirect Model                        simple_group_register_write                     cortex-m4   indirect
Test Group Register Read Using Register Value Type On Cortex-M4 For InDirect Model      group_register_read_using_register_value_type   cortex-m4   indirect
Test Group Register Write Using Register Value Type On Cortex-M4 For InDirect Model     group_register_write_using_register_value_type  cortex-m4   indirect
Test Register Value Type Access On Cortex-M4 For InDirect Model                         register_value_type_access                      cortex-m4   indirect
Test Iterate Over Group Register On Cortex-M4 For InDirect Model                        iterate_over_group_register                     cortex-m4   indirect
