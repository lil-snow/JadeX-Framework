@echo off
setlocal enabledelayedexpansion
set "include_directories=-Iinclude -Ilib\glad\include"
set "project_name=jadex"
set "compiler_flags=-Wvarargs -Wall -Werror -msse"
set "defines=-DJX_BUILD_DLL -DJX_NO_SIMD"
set "source_dir=src"
set "glad_dir=lib\glad\src"

set "files="
for /r %source_dir% %%F in (*.c) do set "files=!files! %%F"
for /r %glad_dir% %%F in (*.c) do set "files=!files! %%F"
call gcc -shared %files% -o ..\bin\%project_name%.dll %include_directories% %compiler_flags% %defines%

endlocal