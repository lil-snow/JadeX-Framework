@echo off
setlocal enabledelayedexpansion
set "include_directories=-I..\jadex\include"
set "project_name=example"
set "compiler_flags=-Wvarargs -Wall -Werror -msse"
set "source_dir=src"
set "jadex_dll_path=..\bin\jadex.dll"

set "files="
for /r %source_dir% %%F in (*.c) do set "files=!files! %%F"
call gcc %files% -o ..\bin\%project_name% %include_directories% %compiler_flags% %jadex_dll_path%

endlocal