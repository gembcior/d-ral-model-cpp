*** Settings ***
Documentation     Regression test suite to protect register access and address calculation
Resource          resources/assembly.resource
Resource          resources/emulation.resource
Test Template     Check Register Access


*** Keywords ***
Check Register Access
    [Documentation]         Check that the register access is as expected
    [Arguments]             ${platform}    ${variant}
    ${expected_output} =    Get Expected Memory Content
    ${actual_output} =      Run Emulation And Get Memory Content    ${platform}    ${variant}
    Should Be Equal         ${actual_output}    ${expected_output}    Memory content is not as expected    values=True


*** Test Cases ***                      PLATFORM        VARIANT
Test Direct Model Register Access       ${PLATFORM}     direct
Test InDirect Model Register Access     ${PLATFORM}     indirect
