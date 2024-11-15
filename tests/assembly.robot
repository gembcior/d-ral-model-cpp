*** Settings ***
Documentation     Regression test suite to protect compilation output and optimisation
Resource          resources/project.resource
Resource          resources/assembly.resource

*** Keywords ***
Check Compilation Output For ${symbol}
  [Documentation]    Check that the compilation output is as expected
  ${expected_output} =    Set Variable    Expected output
  ${actual_output} =    Disassemble ${symbol} from    ${BinDir}
  Should Be Equal    ${actual_output}    ${expected_output}    Compilation output for ${symbol} is not as expected    values=False

*** Test Cases ***
Check Compilation Output For Main
    [Documentation]    Check that the compilation output is as expected for the main symbol
    Check Compilation Output For main

Check Compilation Output For Zupa
    [Documentation]    Check that the compilation output is as expected for the zupa symbol
    Check Compilation Output For zupa
