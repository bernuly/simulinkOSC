@echo OFF
set MATLAB_DIR=C:\Program Files\MATLAB\R2018b
set MATLAB_ROOT=C:\PROGRA~1\MATLAB\R2018b
set WIN_SDK_DIR=C:\Program Files\Microsoft SDKs\Windows\v7.1\


set LIBDIRS=-Loscpack_1_1_0/build/Release

set LIBS=-lWs2_32 -lwinmm -loscpack
set INCL=-Ioscpack_1_1_0 

REM activemq-cpp-library-3.9.5 -Iactivemq-cpp-library-3.9.5\src\main -Iapr-1.6.5 -Iapr-1.6.5\include -lWs2_32.lib

set FLAGS=-g -D_WIN64 -D_WINDOWS
REM -DNDEBUG


echo %LIBDIRS%
echo %LIBS%
echo %INCL%

call "%MATLAB_DIR%\bin\mex.bat" %FLAGS%  %LIBDIRS% %LIBS% %INCL% simulinkOSC.cpp simulinkOSC_wrapper.cpp simulinkOSC_mycode.cpp

REM -outdir Release

pause




  
