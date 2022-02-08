set PLATFORM_NELSON=win32
set BOOST_NELSON=x32-1_78
set VC_VERSION=vc143
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
copy boost\lib\boost_bzip2-%VC_VERSION%-mt-%BOOST_NELSON%.dll ..\NelSon\bin\%PLATFORM_NELSON%\boost_bzip2-%VC_VERSION%-mt-%BOOST_NELSON%.dll
copy boost\lib\boost_zlib-%VC_VERSION%-mt-%BOOST_NELSON%.dll ..\NelSon\bin\%PLATFORM_NELSON%\boost_zlib-%VC_VERSION%-mt-%BOOST_NELSON%.dll
copy boost\lib\boost_serialization-%VC_VERSION%-mt-%BOOST_NELSON%.dll ..\NelSon\bin\%PLATFORM_NELSON%\boost_serialization-%VC_VERSION%-mt-%BOOST_NELSON%.dll

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
copy boost\lib\boost_bzip2-%VC_VERSION%-mt-gd-%BOOST_NELSON%.dll ..\NelSon\bin\%PLATFORM_NELSON%\boost_bzip2-%VC_VERSION%-mt-gd-%BOOST_NELSON%.dll
copy boost\lib\boost_zlib-%VC_VERSION%-mt-gd-%BOOST_NELSON%.dll ..\NelSon\bin\%PLATFORM_NELSON%\boost_zlib-%VC_VERSION%-mt-gd-%BOOST_NELSON%.dll
copy boost\lib\boost_serialization-%VC_VERSION%-mt-gd-%BOOST_NELSON%.dll ..\NelSon\bin\%PLATFORM_NELSON%\boost_serialization-%VC_VERSION%-mt-gd-%BOOST_NELSON%.dll

copy boost\LICENSE_1_0.txt ..\NelSon\bin\%PLATFORM_NELSON%\LICENSE_1_0.txt

rem GetText
mkdir ..\NelSon\tools\gettext
xcopy /E /Y gettext ..\NelSon\tools\gettext 

rem CMake
xcopy /E /Y .\cmake ..\NelSon\tools\cmake\

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
copy %QTDIR%\bin\Qt?3DCore.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?3DExtras.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?3DInput.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?3DLogic.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?3DQuick.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?3DQuickExtras.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?3DQuickInput.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?3DQuickRender.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?3DRender.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?CLucene.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?Concurrent.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?Core.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?DBus.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?Gui.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?Help.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?Multimedia.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?MultimediaQuick_p.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?MultimediaWidgets.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?Network.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?OpenGL.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?PrintSupport.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?Qml.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?Quick.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?QuickControls2.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?QuickParticles.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?QuickTemplates2.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?QuickWidgets.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?Sensors.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?Sql.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?Svg.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?WebChannel.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?WebEngine.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?WebEngineCore.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?WebEngineWidgets.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?WebSockets.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?WebView.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?Widgets.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?WinExtras.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?QmlWorkerScript.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?QmlModels.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?QuickControls2Impls.dll ..\NelSon\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?QuickControls2Impl.dll ..\NelSon\bin\%PLATFORM_NELSON%\

rem vc runtime
copy .\vc14.3-runtime\*.dll ..\NelSon\bin\%PLATFORM_NELSON%\*.dll
copy .\vc14.3-runtime\*.exe  ..\NelSon\bin\%PLATFORM_NELSON%\*.exe

rem clang-format
copy .\clang-format\*.exe ..\NelSon\tools\clang_format\*.exe

rem intel runtime
copy .\intel-runtime\*.dll ..\NelSon\bin\%PLATFORM_NELSON%\*.dll

rem MKL blas, lapack, FFTW, VML wrapper
mkdir ..\NelSon\bin\%PLATFORM_NELSON%\mkl
copy .\mkl\mkl_license.txt ..\NelSon\bin\%PLATFORM_NELSON%\mkl\mkl_license.txt
copy .\mkl\mkl_license.txt ..\NelSon\bin\%PLATFORM_NELSON%\mkl_license.txt

copy .\mkl\blas-lapack-wrapper\bin\*.dll ..\NelSon\bin\%PLATFORM_NELSON%\mkl\*.*
copy .\mkl\fftw-wrapper\bin\*.dll ..\NelSon\bin\%PLATFORM_NELSON%\mkl\*.*
copy .\mkl\omp\bin\*.dll ..\NelSon\bin\%PLATFORM_NELSON%\mkl\*.*
copy .\mkl\vml\bin\*.dll ..\NelSon\bin\%PLATFORM_NELSON%\mkl\*.*

copy .\mkl\blas-lapack-wrapper\bin\*.dll ..\NelSon\bin\%PLATFORM_NELSON%\*.dll
copy .\mkl\fftw-wrapper\bin\*.dll ..\NelSon\bin\%PLATFORM_NELSON%\*.dll
copy .\mkl\omp\bin\*.dll ..\NelSon\bin\%PLATFORM_NELSON%\*.dll
copy .\mkl\vml\bin\*.dll ..\NelSon\bin\%PLATFORM_NELSON%\*.dll

rem ICU library
copy icu\bin\*.dll ..\NelSon\bin\%PLATFORM_NELSON%\*.dll

rem libxml2  dependencies
copy .\zlib\bin\zlib.dll ..\NelSon\bin\%PLATFORM_NELSON%\zlib.dll
copy .\libxml2\bin\libxml2.dll ..\NelSon\bin\%PLATFORM_NELSON%\libxml2.dll
copy .\libxml2\bin\libiconv.dll ..\NelSon\bin\%PLATFORM_NELSON%\libiconv.dll

rem openblas
mkdir ..\NelSon\bin\%PLATFORM_NELSON%\openblas
copy .\openblas\bin\*.dll ..\NelSon\bin\%PLATFORM_NELSON%\openblas\*.dll

rem mpi library
copy .\mpi\bin\*.dll ..\NelSon\bin\%PLATFORM_NELSON%\*.*
copy .\mpi\License\license_sdk.rtf ..\NelSon\bin\%PLATFORM_NELSON%\license_sdk.rtf
copy .\mpi\MSMpiSetup.exe ..\NelSon\bin\%PLATFORM_NELSON%\MSMpiSetup.exe

rem hdf5 dependencies
copy .\hdf5\bin\*.dll ..\NelSon\bin\%PLATFORM_NELSON%\*.dll
copy .\hdf5\bin\*.exe ..\NelSon\bin\%PLATFORM_NELSON%\*.exe

rem curl
copy .\curl\bin\*.dll ..\NelSon\bin\%PLATFORM_NELSON%\*.dll

rem http-parser
copy .\http-parser\bin\*.dll ..\NelSon\bin\%PLATFORM_NELSON%\*.dll

rem icu
copy .\icu\bin\*.dll ..\NelSon\bin\%PLATFORM_NELSON%\*.dll

rem libffi
copy .\libffi\bin\*.dll ..\NelSon\bin\%PLATFORM_NELSON%\*.dll

rem libflac
copy .\libflac\bin\*.dll ..\NelSon\bin\%PLATFORM_NELSON%\*.dll

rem libgit2
copy .\libgit2\bin\*.dll ..\NelSon\bin\%PLATFORM_NELSON%\*.dll

rem libiconv
copy .\libiconv\bin\*.dll ..\NelSon\bin\%PLATFORM_NELSON%\*.dll

rem liblzma
copy .\liblzma\bin\*.dll ..\NelSon\bin\%PLATFORM_NELSON%\*.dll

rem libogg
copy .\libogg\bin\*.dll ..\NelSon\bin\%PLATFORM_NELSON%\*.dll

rem libsndfile
copy .\libsndfile\bin\*.dll ..\NelSon\bin\%PLATFORM_NELSON%\*.dll

rem libvorbis
copy .\libvorbis\bin\*.dll ..\NelSon\bin\%PLATFORM_NELSON%\*.dll

rem libxml2
copy .\libxml2\bin\*.dll ..\NelSon\bin\%PLATFORM_NELSON%\*.dll

rem matio
copy .\matio\bin\*.dll ..\NelSon\bin\%PLATFORM_NELSON%\*.dll

rem opus
copy .\opus\bin\*.dll ..\NelSon\bin\%PLATFORM_NELSON%\*.dll

rem pcre
copy .\pcre\bin\*.dll ..\NelSon\bin\%PLATFORM_NELSON%\*.dll

rem portaudio
copy .\portaudio\bin\*.dll ..\NelSon\bin\%PLATFORM_NELSON%\*.dll

rem slicot
copy .\slicot\bin\*.dll ..\NelSon\bin\%PLATFORM_NELSON%\*.dll

rem szip
copy .\szip\bin\*.dll ..\NelSon\bin\%PLATFORM_NELSON%\*.dll

rem taglib
copy .\taglib\bin\*.dll ..\NelSon\bin\%PLATFORM_NELSON%\*.dll

rem zlib
copy .\zlib\bin\*.dll ..\NelSon\bin\%PLATFORM_NELSON%\*.dll
