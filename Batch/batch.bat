:: Use `@echo off` to prevent each command from being printed in the console
@echo off


:: Check batch script arguments
if [%1]==[] echo No arguments provided


:: Set variable from user prompt
set /p link="Enter URL: "
echo "%link%"


:: Variable substitution
set "varA=var_value"
echo "%varA%"
:: > var_value
echo "%varA:_=-%"
:: > var-value


:: Echo empty line
echo.


:: Conditional
if %varA%==5 echo Value is 5

if /I "%varA%" neq "jacob" (
    echo Case-insensitive value is not 'jacob'
)


:: File Operations
REN oldname.txt newname.txt
:: Don't prompt when using wildcards
DEL /Q c:\tmp\*
:: rm -rf
rd /s /q c:\tmp

:: Iterate over files - will prepend '.\' to all file names
for %%f in (.\*) do echo %%f
:: Iterate over files and files in subdirectories
for /R %%f in (.\*) do echo %%f
:: Iterate over all subdirectories
for /D %%s in (.\*) do (
    echo %%s
)


:: Labels and Goto - closest thing to functions
:'label1'
goto 'label1'


:: Grep a file
findstr regex FILE
findstr /l literal FILE
findstr /s regex FILE_AND_RECURSIVE_SUBDIRS
findstr /n regex FILE_GIVES_LINE_NUMBERS


:: Launch Programs
start /min RzSynapse.exe
start "" "Chrome Shortcuts.ahk"


:: Redirect Output
tasklist /FI "IMAGENAME eq Steam.exe" 2>NUL | find /I /N "Steam.exe" >NUL
if not "%ERRORLEVEL%"=="0" (
    echo Steam is running
)
