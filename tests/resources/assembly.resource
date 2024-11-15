*** Settings ***
Documentation       Keywords for .elf files disassembly and analysis
Library             String
Library             Assembly

*** Keywords ***
Disassemble ${symbol} from
    [Arguments]    ${path}
    Log    Disassembling ${symbol} from ${path}
    ${disassembly} =    Assembly.Dissassemble    ${symbol}    ${path}
    RETURN    ${disassembly}

HexDump
    [Arguments]    ${binary}
    Log    Hexdumping ${binary}
    ${hexdump} =    ${binary}
    RETURN    ${hexdump}
