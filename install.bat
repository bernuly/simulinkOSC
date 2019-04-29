@echo OFF

set INSTALL_DIR=%USERPROFILE%\Documents\MATLAB\simulinkOSC
echo copying files to %INSTALL_DIR%


mkdir %INSTALL_DIR%
copy simulinkOSC_lib.slx      %INSTALL_DIR%
copy slblocks.m        %INSTALL_DIR%
copy simulinkOSC.mexw64  %INSTALL_DIR%

pause
