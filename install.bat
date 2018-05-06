set PLATFORM_NELSON=win32
set BOOST_NELSON=x32-1_67
set VC_VERSION=vc141
set QTDIR=%QTDIR32%

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
copy boost\lib\boost_random-%VC_VERSION%-mt-%BOOST_NELSON%.dll ..\NelSon\bin\%PLATFORM_NELSON%\boost_random-%VC_VERSION%-mt-%BOOST_NELSON%.dll

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
copy boost\lib\boost_random-%VC_VERSION%-mt-gd-%BOOST_NELSON%.dll ..\NelSon\bin\%PLATFORM_NELSON%\boost_random-%VC_VERSION%-mt-gd-%BOOST_NELSON%.dll

copy boost\LICENSE_1_0.txt ..\NelSon\bin\%PLATFORM_NELSON%\LICENSE_1_0.txt


rem ICU library
copy icu\bin\icuuc59.dll ..\NelSon\bin\%PLATFORM_NELSON%\icuuc59.dll
copy icu\bin\icudt59.dll ..\NelSon\bin\%PLATFORM_NELSON%\icudt59.dll

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
copy .\vc14.1-runtime\*.dll ..\NelSon\bin\%PLATFORM_NELSON%\*.dll
copy .\vc14.1-runtime\*.exe ..\NelSon\bin\%PLATFORM_NELSON%\*.exe

rem intel runtime
copy .\intel-runtime\*.dll ..\NelSon\bin\%PLATFORM_NELSON%\*.dll

rem QT dependencies

copy %QTDIR%\bin\qhelpgenerator.exe ..\NelSon\bin\%PLATFORM_NELSON%\qhelpgenerator.exe
copy %QTDIR%\bin\qcollectiongenerator.exe ..\NelSon\bin\%PLATFORM_NELSON%\qcollectiongenerator.exe
copy %QTDIR%\bin\assistant.exe ..\NelSon\bin\%PLATFORM_NELSON%\assistant.exe
copy %QTDIR%\bin\icudt5?.dll    ..\NelSon\bin\%PLATFORM_NELSON%\icudt5?.dll
copy %QTDIR%\bin\icuin5?.dll    ..\NelSon\bin\%PLATFORM_NELSON%\icuin5?.dll
copy %QTDIR%\bin\icuuc5?.dll    ..\NelSon\bin\%PLATFORM_NELSON%\icuuc5?.dll

xcopy /E /Y %QTDIR%\plugins ..\NelSon\bin\%PLATFORM_NELSON%\plugins\
del ..\NelSon\bin\%PLATFORM_NELSON%\plugins\*.pdb /s
del ..\NelSon\bin\%PLATFORM_NELSON%\plugins\*d.dll /s

rmdir ..\NelSon\bin\%PLATFORM_NELSON%\plugins\bearer /s /Q
rmdir ..\NelSon\bin\%PLATFORM_NELSON%\plugins\designer /s /Q
rmdir ..\NelSon\bin\%PLATFORM_NELSON%\plugins\qmltooling /s /Q
rmdir ..\NelSon\bin\%PLATFORM_NELSON%\plugins\position /s /Q
rmdir ..\NelSon\bin\%PLATFORM_NELSON%\plugins\playlistformats /s /Q
rmdir ..\NelSon\bin\%PLATFORM_NELSON%\plugins\mediaservice /s /Q
rmdir ..\NelSon\bin\%PLATFORM_NELSON%\plugins\geoservices /s /Q
rmdir ..\NelSon\bin\%PLATFORM_NELSON%\plugins\audio /s /Q
rmdir ..\NelSon\bin\%PLATFORM_NELSON%\plugins\generic /s /Q


xcopy /E /Y %QTDIR%\qml ..\NelSon\bin\%PLATFORM_NELSON%\qml\
del ..\NelSon\bin\%PLATFORM_NELSON%\qml\*.pdb /s
del ..\NelSon\bin\%PLATFORM_NELSON%\qml\*d.dll /s
copy %QTDIR%\qml\QtCanvas3D\qtcanvas3d.dll  ..\NelSon\bin\%PLATFORM_NELSON%\qml\QtCanvas3D\

rmdir ..\NelSon\bin\%PLATFORM_NELSON%\qml\QtBluetooth /s /Q
rmdir ..\NelSon\bin\%PLATFORM_NELSON%\qml\QtLocation /s /Q
rmdir ..\NelSon\bin\%PLATFORM_NELSON%\qml\QtNfc /s /Q
rmdir ..\NelSon\bin\%PLATFORM_NELSON%\qml\QtPositioning /s /Q
rmdir ..\NelSon\bin\%PLATFORM_NELSON%\qml\QtTest /s /Q


copy %QTDIR%\bin\d3dcompiler_*.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\libEGL.dll  ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\libGLESv2.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\opengl32sw.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt53DCore.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt53DExtras.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt53DInput.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt53DLogic.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt53DQuick.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt53DQuickExtras.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt53DQuickInput.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt53DQuickRender.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt53DRender.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt5CLucene.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt5Concurrent.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt5Core.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt5DBus.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt5Gui.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt5Help.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt5Multimedia.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt5MultimediaQuick_p.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt5MultimediaWidgets.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt5Network.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt5OpenGL.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt5PrintSupport.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt5Qml.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt5Quick.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt5QuickControls2.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt5QuickParticles.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt5QuickTemplates2.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt5QuickWidgets.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt5Sensors.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt5Sql.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt5Svg.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt5WebChannel.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt5WebEngine.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt5WebEngineCore.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt5WebEngineWidgets.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt5WebSockets.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt5WebView.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt5Widgets.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt5WinExtras.dll ..\NelSon\bin\%PLATFORM_NELSON%\

rem openblas
mkdir ..\NelSon\bin\%PLATFORM_NELSON%\openblas
copy .\openblas\bin\*.dll ..\NelSon\bin\%PLATFORM_NELSON%\openblas\*.dll

rem MKL blas, lapack, FFTW wrapper
mkdir ..\NelSon\bin\%PLATFORM_NELSON%\mkl
copy .\mkl\*.* ..\NelSon\bin\%PLATFORM_NELSON%\mkl\*.*
copy .\mkl\*.* ..\NelSon\bin\%PLATFORM_NELSON%\*.*

rem fftw library
mkdir ..\NelSon\bin\%PLATFORM_NELSON%\fftw
copy .\fftw\bin\*.* ..\NelSon\bin\%PLATFORM_NELSON%\fftw\*.*

rem mpi library
copy .\mpi\bin\*.dll ..\NelSon\bin\%PLATFORM_NELSON%\*.*
copy .\mpi\License\license_sdk.rtf ..\NelSon\bin\%PLATFORM_NELSON%\license_sdk.rtf
copy .\mpi\MSMpiSetup.exe ..\NelSon\bin\%PLATFORM_NELSON%\MSMpiSetup.exe

rem portaudio library
copy .\portaudio\bin\*.dll ..\NelSon\bin\%PLATFORM_NELSON%\*.*

rem libsndfile library
copy .\libsndfile\bin\*.dll ..\NelSon\bin\%PLATFORM_NELSON%\*.*
