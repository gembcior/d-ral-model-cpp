*** Settings ***
Documentation     Regression test suite to protect compilation output and optimisation
Resource          resources/project.resource
Resource          resources/assembly.resource
Test Template     Check Disassembly


*** Keywords ***
Check Disassembly
    [Documentation]         Check that the disassembly of a symbol is as expected
    [Arguments]             ${symbol}    ${platform}
    ${expected_output} =    Get Expected ${symbol} Disassembly On ${platform} Platform
    ${actual_output} =      Disassemble ${symbol} from ${InstallDir}${/}${platform}${/}bin${/}app-model.elf
    Should Be Equal         ${actual_output}    ${expected_output}    Compilation output for ${symbol} is not as expected    values=False


*** Test Cases ***                          SYMBOL                  PLATFORM
Test Simple Register Read On Cortex-M3      simple_register_read    cortex-m3
Test Simple Register Write On Cortex-M3     simple_register_write   cortex-m3

Test Simple Register Read On Cortex-M4      simple_register_read    cortex-m4
Test Simple Register Write On Cortex-M4     simple_register_write   cortex-m4
