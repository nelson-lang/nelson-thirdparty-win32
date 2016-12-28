set PLATFORM_NELSON=win32
set BOOST_NELSON=1_61
set VC_VERSION=vc140

rem release mode
copy boost\lib\boost_filesystem-%VC_VERSION%-mt-%BOOST_NELSON%.dll ..\NelSon\bin\%PLATFORM_NELSON%\boost_filesystem-%VC_VERSION%-mt-%BOOST_NELSON%.dll
copy boost\lib\boost_system-%VC_VERSION%-mt-%BOOST_NELSON%.dll ..\NelSon\bin\%PLATFORM_NELSON%\boost_system-%VC_VERSION%-mt-%BOOST_NELSON%.dll
copy boost\lib\boost_chrono-%VC_VERSION%-mt-%BOOST_NELSON%.dll ..\NelSon\bin\%PLATFORM_NELSON%\boost_chrono-%VC_VERSION%-mt-%BOOST_NELSON%.dll
copy boost\lib\boost_date_time-%VC_VERSION%-mt-%BOOST_NELSON%.dll ..\NelSon\bin\%PLATFORM_NELSON%\boost_date_time-%VC_VERSION%-mt-%BOOST_NELSON%.dll
copy boost\lib\boost_thread-%VC_VERSION%-mt-%BOOST_NELSON%.dll ..\NelSon\bin\%PLATFORM_NELSON%\boost_thread-%VC_VERSION%-mt-%BOOST_NELSON%.dll
copy boost\lib\boost_iostreams-%VC_VERSION%-mt-%BOOST_NELSON%.dll ..\NelSon\bin\%PLATFORM_NELSON%\boost_iostreams-%VC_VERSION%-mt-%BOOST_NELSON%.dll
copy boost\lib\boost_program_options-%VC_VERSION%-mt-%BOOST_NELSON%.dll ..\NelSon\bin\%PLATFORM_NELSON%\boost_program_options-%VC_VERSION%-mt-%BOOST_NELSON%.dll
copy boost\lib\boost_locale-%VC_VERSION%-mt-%BOOST_NELSON%.dll ..\NelSon\bin\%PLATFORM_NELSON%\boost_locale-%VC_VERSION%-mt-%BOOST_NELSON%.dll
copy boost\lib\boost_regex-%VC_VERSION%-mt-%BOOST_NELSON%.dll ..\NelSon\bin\%PLATFORM_NELSON%\boost_regex-%VC_VERSION%-mt-%BOOST_NELSON%.dll

rem debug mode
copy boost\lib\boost_filesystem-%VC_VERSION%-mt-gd-%BOOST_NELSON%.dll ..\NelSon\bin\%PLATFORM_NELSON%\boost_filesystem-%VC_VERSION%-mt-gd-%BOOST_NELSON%.dll
copy boost\lib\boost_system-%VC_VERSION%-mt-gd-%BOOST_NELSON%.dll ..\NelSon\bin\%PLATFORM_NELSON%\boost_system-%VC_VERSION%-mt-gd-%BOOST_NELSON%.dll
copy boost\lib\boost_chrono-%VC_VERSION%-mt-gd-%BOOST_NELSON%.dll ..\NelSon\bin\%PLATFORM_NELSON%\boost_chrono-%VC_VERSION%-mt-gd-%BOOST_NELSON%.dll
copy boost\lib\boost_date_time-%VC_VERSION%-mt-gd-%BOOST_NELSON%.dll ..\NelSon\bin\%PLATFORM_NELSON%\boost_date_time-%VC_VERSION%-mt-gd-%BOOST_NELSON%.dll
copy boost\lib\boost_thread-%VC_VERSION%-mt-gd-%BOOST_NELSON%.dll ..\NelSon\bin\%PLATFORM_NELSON%\boost_thread-%VC_VERSION%-mt-gd-%BOOST_NELSON%.dll
copy boost\lib\boost_iostreams-%VC_VERSION%-mt-gd-%BOOST_NELSON%.dll ..\NelSon\bin\%PLATFORM_NELSON%\boost_iostreams-%VC_VERSION%-mt-gd-%BOOST_NELSON%.dll
copy boost\lib\boost_program_options-%VC_VERSION%-mt-gd-%BOOST_NELSON%.dll ..\NelSon\bin\%PLATFORM_NELSON%\boost_program_options-%VC_VERSION%-mt-gd-%BOOST_NELSON%.dll
copy boost\lib\boost_locale-%VC_VERSION%-mt-gd-%BOOST_NELSON%.dll ..\NelSon\bin\%PLATFORM_NELSON%\boost_locale-%VC_VERSION%-mt-gd-%BOOST_NELSON%.dll
copy boost\lib\boost_regex-%VC_VERSION%-mt-gd-%BOOST_NELSON%.dll ..\NelSon\bin\%PLATFORM_NELSON%\boost_regex-%VC_VERSION%-mt-gd-%BOOST_NELSON%.dll

copy boost\LICENSE_1_0.txt ..\NelSon\bin\%PLATFORM_NELSON%\LICENSE_1_0.txt


rem ICU library
copy icu\bin\icuuc56.dll ..\NelSon\bin\%PLATFORM_NELSON%\icuuc56.dll
copy icu\bin\icudt56.dll ..\NelSon\bin\%PLATFORM_NELSON%\icudt56.dll

copy libffi\bin\libffi.dll ..\NelSon\bin\%PLATFORM_NELSON%\libffi.dll

rem QT dependencies
mkdir ..\NelSon\bin\%PLATFORM_NELSON%\platforms
copy %QTDIR32%\plugins\platforms\qminimal.dll ..\NelSon\bin\%PLATFORM_NELSON%\platforms\qminimal.dll
copy %QTDIR32%\plugins\platforms\qoffscreen.dll ..\NelSon\bin\%PLATFORM_NELSON%\platforms\qoffscreen.dll
copy %QTDIR32%\plugins\platforms\qwindows.dll ..\NelSon\bin\%PLATFORM_NELSON%\platforms\qwindows.dll
copy %QTDIR32%\bin\icudt5?.dll    ..\NelSon\bin\%PLATFORM_NELSON%\icudt5?.dll
copy %QTDIR32%\bin\icuin5?.dll    ..\NelSon\bin\%PLATFORM_NELSON%\icuin5?.dll
copy %QTDIR32%\bin\\icuuc5?.dll    ..\NelSon\bin\%PLATFORM_NELSON%\icuuc5?.dll
copy %QTDIR32%\bin\libEGL.dll    ..\NelSon\bin\%PLATFORM_NELSON%\libEGL.dll
copy %QTDIR32%\bin\libGLESv2.dll    ..\NelSon\bin\%PLATFORM_NELSON%\libGLESv2.dll
copy %QTDIR32%\bin\Qt5Core.dll    ..\NelSon\bin\%PLATFORM_NELSON%\Qt5Core.dll
copy %QTDIR32%\bin\Qt5Gui.dll    ..\NelSon\bin\%PLATFORM_NELSON%\Qt5Gui.dll
copy %QTDIR32%\bin\Qt5PrintSupport.dll    ..\NelSon\bin\%PLATFORM_NELSON%\Qt5PrintSupport.dll
copy %QTDIR32%\bin\Qt5Widgets.dll    ..\NelSon\bin\%PLATFORM_NELSON%\Qt5Widgets.dll

copy %QTDIR%\bin\qhelpgenerator.exe ..\NelSon\bin\%PLATFORM_NELSON%\qhelpgenerator.exe
copy %QTDIR%\bin\qcollectiongenerator.exe ..\NelSon\bin\%PLATFORM_NELSON%\qcollectiongenerator.exe
copy %QTDIR%\bin\Qt5Help.dll ..\NelSon\bin\%PLATFORM_NELSON%\Qt5Help.dll
copy %QTDIR%\bin\Qt5Sql.dll ..\NelSon\bin\%PLATFORM_NELSON%\Qt5Sql.dll
copy %QTDIR%\bin\Qt5Network.dll ..\NelSon\bin\%PLATFORM_NELSON%\Qt5Network.dll
copy %QTDIR%\bin\Qt5CLucene.dll ..\NelSon\bin\%PLATFORM_NELSON%\Qt5CLucene.dll
copy %QTDIR%\bin\assistant.exe ..\NelSon\bin\%PLATFORM_NELSON%\assistant.exe

copy .\zlib\bin\zlib1.dll ..\NelSon\bin\%PLATFORM_NELSON%\zlib1.dll
rem libxml2 dependencies
copy .\libxml2\bin\libxml2.dll ..\NelSon\bin\%PLATFORM_NELSON%\libxml2.dll
copy .\libxml2\bin\libiconv.dll ..\NelSon\bin\%PLATFORM_NELSON%\libiconv.dll

mkdir ..\NelSon\tools\gettext
xcopy /E /Y gettext ..\NelSon\tools\gettext\

copy .\zlib\bin\zlib1.dll ..\NelSon\bin\%PLATFORM_NELSON%\zlib1.dll

rem libxml2  dependencies
copy .\libxml2\bin\libxml2.dll ..\NelSon\bin\%PLATFORM_NELSON%\libxml2.dll
copy .\libxml2\bin\libiconv.dll ..\NelSon\bin\%PLATFORM_NELSON%\libiconv.dll

rem vc runtime
copy .\vc14-runtime\*.dll ..\NelSon\bin\%PLATFORM_NELSON%\*.dll
copy .\vc14-runtime\*.exe ..\NelSon\bin\%PLATFORM_NELSON%\*.exe

rem intel runtime
copy .\intel-runtime\*.dll ..\NelSon\bin\%PLATFORM_NELSON%\*.dll
