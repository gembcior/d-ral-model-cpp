*** Settings ***
Suite Setup     Setup
Suite Teardown  Teardown
Test Teardown   Test Teardown
Resource        ${RENODEKEYWORDS}
Resource        resources/project.resource

*** Test Cases ***
Should Print Help
    ${x}=  Execute Command     help
           Should Contain      ${x}    Available commands:

Basic Write Test
    Execute Command     mach create
    Execute Command     machine LoadPlatformDescription @${RootDir}/renode/platforms/arm-cortex-m4.repl
    Execute Command     sysbus LoadELF @${RootDir}/output/dral/app/read/read
