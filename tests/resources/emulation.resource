*** Settings ***
Documentation       Keywords for emulation
Resource            project.resource
Library             Assembly
Library             Emulation
Library             OperatingSystem

*** Variables ***
${DRAL_MEMORY_ADDRESS}      0x20000000
${DRAL_MEMORY_SIZE}         0x80000


*** Keywords ***
Set Emulation Parameters
    [Arguments]                             ${description}    ${executable}
    [Documentation]                         Set the parameters for the emulation
    Log                                     Setting emulation parameters
    Log                                     Machine Description: ${description}
    Log                                     Executable: ${executable}
    Emulation.Set Machine Description       ${description}
    Emulation.Set Executable                ${executable}

Create Emulation
    [Documentation]                         Create an emulation
    Emulation.Create

Start Emulation
    [Documentation]                         Start the emulation
    Log                                     Starting emulation
    Emulation.Start

Stop Emulation
    [Documentation]                         Stop the emulation
    Log                                     Stopping emulation
    Emulation.Stop

Dump ${bytes} Bytes From ${address}
    [Documentation]                         Dump a number of bytes from an address
    Log                                     Dumping ${bytes} bytes from ${address}
    ${memdump} =                            Emulation.Dump Memory   ${address}    ${bytes}
    RETURN                                  ${memdump}

Get Expected Memory Content
    [Documentation]                         Get the expected memory dump file
    ${memdump} =                            Get File    ${DataDir}${/}memdump${/}dral_memory.hex
    RETURN                                  ${memdump}

Run Emulation And Get Memory Content
    [Arguments]                             ${platform}    ${variant}
    [Documentation]                         Run the emulation and dump memory
    Set Emulation Parameters                ${PlatformsDir}${/}${platform}.repl    ${InstallDir}${/}${platform}${/}bin${/}app-${variant}.elf
    Create Emulation
    Start Emulation
    Sleep                                   1s
    Stop Emulation
    ${memdump} =                            Dump ${DRAL_MEMORY_SIZE} Bytes From ${DRAL_MEMORY_ADDRESS}
    RETURN                                  ${memdump}
