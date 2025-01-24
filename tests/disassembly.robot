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


*** Test Cases ***                                              SYMBOL                  PLATFORM    VARIANT
Test Simple Register Read On Cortex-M3 For Direct Model         simple_register_read    cortex-m3   direct
Test Simple Register Write On Cortex-M3 For Direct Model        simple_register_write   cortex-m3   direct

Test Simple Register Read On Cortex-M4 For Direct Model         simple_register_read    cortex-m4   direct
Test Simple Register Write On Cortex-M4 For Direct Model        simple_register_write   cortex-m4   direct

Test Simple Register Read On Cortex-M3 For InDirect Model       simple_register_read    cortex-m3   indirect
Test Simple Register Write On Cortex-M3 For InDirect Model      simple_register_write   cortex-m3   indirect

Test Simple Register Read On Cortex-M4 For InDirect Model       simple_register_read    cortex-m4   indirect
Test Simple Register Write On Cortex-M4 For InDirect Model      simple_register_write   cortex-m4   indirect
