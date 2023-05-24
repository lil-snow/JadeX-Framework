@Echo off
pushd jadex
call build.bat
popd
if %ERRORLEVEL% NEQ 0 ( echo JadeX: Error: %ERRORLEVEL% && exit )

pushd example
call build.bat
popd
if %ERRORLEVEL% NEQ 0 ( echo Example: Error: %ERRORLEVEL% && exit )
echo All projects built successfully
echo.