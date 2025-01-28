*** Settings ***
Documentation       Keywords for emulation
Resource            project.resource
Library             Assembly
Library             Emulation
Library             OperatingSystem

*** Keywords ***
Create Emulation From ${description} With ${executable}
    [Documentation]                         Create an emulation from a description and an executable
    Log                                     Creating emulation from ${description} with ${executable}
    Emulation.Set Machine Description       ${description}
    Emulation.Set Executable                ${executable}
    Emulation.Create

Start Emulation
    [Documentation]                         Start the emulation
    Log                                     Starting emulation
    Emulation.Start

Stop Emulation
    [Documentation]                         Stop the emulation
    Log                                     Stopping emulation
    Emulation.Stop

Dump ${bytes} Bytes From ${address} To ${file}
    [Documentation]                         Dump a number of bytes from an address to a file
    Log                                     Dumping ${bytes} bytes from ${address} to ${file}
    Emulation.Dump Memory                   ${address}    ${bytes}    ${file}
