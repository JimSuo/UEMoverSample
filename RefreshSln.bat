@echo off
set PROJECTPATH=%~dp0UEMoverSample.uproject

%UE5ENGINEPATH%\Binaries\Win64\UnrealVersionSelector-Win64-Shipping.exe -switchversion %PROJECTPATH%

%UE5ENGINEPATH%\Binaries\DotNET\UnrealBuildTool\UnrealBuildTool.exe -projectfiles -project=%PROJECTPATH% -game -engine -progress

pause

exit /B 1