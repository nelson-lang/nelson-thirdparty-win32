set PLATFORM_NELSON=win32
set BOOST_NELSON=x32-1_82
set VC_VERSION=vc143
set QTDIR=%QTDIR32%
set NELSON_DIR=..\nelson

rem remove qt debug symbols
del %NELSON_DIR%\bin\%PLATFORM_NELSON%\plugins\*.pdb /s
del %NELSON_DIR%\bin\%PLATFORM_NELSON%\plugins\*d.dll /s
del %NELSON_DIR%\bin\%PLATFORM_NELSON%\qml\*.pdb /s
del %NELSON_DIR%\bin\%PLATFORM_NELSON%\qml\*d.dll /s
del %NELSON_DIR%\bin\%PLATFORM_NELSON%\Qt*d.dll /s
