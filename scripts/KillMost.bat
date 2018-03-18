@echo off
setlocal

set "whitelist=Microsoft Nvidia Valve Mozilla Discord Rainmeter VLC"

for /f "tokens=2 delims=," %%I in (
    'wmic process get executablepath^,status /format:csv ^| find "\"'
) do (
    set "proc=%%~I"
    setlocal enabledelayedexpansion 
    set /p "=%%~I: "<NUL
    wmic datafile where "name='!proc:\=\\!'" get manufacturer | findstr /i "%whitelist%" >NUL && (
        echo OK
    ) || (
        echo UNACCEPTABLE!
        taskkill /im "%%~nxI" /f
    )
    endlocal
)
