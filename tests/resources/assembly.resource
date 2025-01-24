*** Settings ***
Documentation       Keywords for .elf files disassembly and analysis
Resource            project.resource
Library             Assembly
Library             OperatingSystem

*** Keywords ***
Disassemble ${symbol} from ${path}
    [Documentation]     Disassemble a symbol from a .elf file
    Log                 Disassembling ${symbol}() from ${path}
    ${disassembly} =    Assembly.Dissassemble    ${symbol}()    ${path}
    RETURN              ${disassembly}

Get Expected ${symbol} Disassembly On ${platform} Platform For ${variant}
    [Documentation]     Get the expected disassembly of a symbol on a specified platform
    Log                 Getting expected ${symbol}() disassembly on ${platform} platform
    ${disassembly} =    Get File    ${DataDir}${/}disassembly${/}${platform}${/}${variant}_${symbol}.txt
    RETURN              ${disassembly}
