set PLATFORM_NELSON=win32
set BOOST_NELSON=x32-1_86
set VC_VERSION=vc143
set QTDIR=%QTDIR32%
set NELSON_DIR=..\nelson

rem release mode
copy boost\lib\boost_filesystem-%VC_VERSION%-mt-%BOOST_NELSON%.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\boost_filesystem-%VC_VERSION%-mt-%BOOST_NELSON%.dll
copy boost\lib\boost_system-%VC_VERSION%-mt-%BOOST_NELSON%.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\boost_system-%VC_VERSION%-mt-%BOOST_NELSON%.dll
copy boost\lib\boost_chrono-%VC_VERSION%-mt-%BOOST_NELSON%.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\boost_chrono-%VC_VERSION%-mt-%BOOST_NELSON%.dll
copy boost\lib\boost_date_time-%VC_VERSION%-mt-%BOOST_NELSON%.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\boost_date_time-%VC_VERSION%-mt-%BOOST_NELSON%.dll
copy boost\lib\boost_thread-%VC_VERSION%-mt-%BOOST_NELSON%.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\boost_thread-%VC_VERSION%-mt-%BOOST_NELSON%.dll
copy boost\lib\boost_iostreams-%VC_VERSION%-mt-%BOOST_NELSON%.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\boost_iostreams-%VC_VERSION%-mt-%BOOST_NELSON%.dll
copy boost\lib\boost_program_options-%VC_VERSION%-mt-%BOOST_NELSON%.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\boost_program_options-%VC_VERSION%-mt-%BOOST_NELSON%.dll
copy boost\lib\boost_locale-%VC_VERSION%-mt-%BOOST_NELSON%.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\boost_locale-%VC_VERSION%-mt-%BOOST_NELSON%.dll
copy boost\lib\boost_regex-%VC_VERSION%-mt-%BOOST_NELSON%.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\boost_regex-%VC_VERSION%-mt-%BOOST_NELSON%.dll
copy boost\lib\boost_random-%VC_VERSION%-mt-%BOOST_NELSON%.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\boost_random-%VC_VERSION%-mt-%BOOST_NELSON%.dll
copy boost\lib\boost_bzip2-%VC_VERSION%-mt-%BOOST_NELSON%.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\boost_bzip2-%VC_VERSION%-mt-%BOOST_NELSON%.dll
copy boost\lib\boost_zlib-%VC_VERSION%-mt-%BOOST_NELSON%.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\boost_zlib-%VC_VERSION%-mt-%BOOST_NELSON%.dll
copy boost\lib\boost_serialization-%VC_VERSION%-mt-%BOOST_NELSON%.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\boost_serialization-%VC_VERSION%-mt-%BOOST_NELSON%.dll

rem debug mode
copy boost\lib\boost_filesystem-%VC_VERSION%-mt-gd-%BOOST_NELSON%.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\boost_filesystem-%VC_VERSION%-mt-gd-%BOOST_NELSON%.dll
copy boost\lib\boost_system-%VC_VERSION%-mt-gd-%BOOST_NELSON%.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\boost_system-%VC_VERSION%-mt-gd-%BOOST_NELSON%.dll
copy boost\lib\boost_chrono-%VC_VERSION%-mt-gd-%BOOST_NELSON%.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\boost_chrono-%VC_VERSION%-mt-gd-%BOOST_NELSON%.dll
copy boost\lib\boost_date_time-%VC_VERSION%-mt-gd-%BOOST_NELSON%.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\boost_date_time-%VC_VERSION%-mt-gd-%BOOST_NELSON%.dll
copy boost\lib\boost_thread-%VC_VERSION%-mt-gd-%BOOST_NELSON%.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\boost_thread-%VC_VERSION%-mt-gd-%BOOST_NELSON%.dll
copy boost\lib\boost_iostreams-%VC_VERSION%-mt-gd-%BOOST_NELSON%.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\boost_iostreams-%VC_VERSION%-mt-gd-%BOOST_NELSON%.dll
copy boost\lib\boost_program_options-%VC_VERSION%-mt-gd-%BOOST_NELSON%.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\boost_program_options-%VC_VERSION%-mt-gd-%BOOST_NELSON%.dll
copy boost\lib\boost_locale-%VC_VERSION%-mt-gd-%BOOST_NELSON%.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\boost_locale-%VC_VERSION%-mt-gd-%BOOST_NELSON%.dll
copy boost\lib\boost_regex-%VC_VERSION%-mt-gd-%BOOST_NELSON%.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\boost_regex-%VC_VERSION%-mt-gd-%BOOST_NELSON%.dll
copy boost\lib\boost_random-%VC_VERSION%-mt-gd-%BOOST_NELSON%.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\boost_random-%VC_VERSION%-mt-gd-%BOOST_NELSON%.dll
copy boost\lib\boost_bzip2-%VC_VERSION%-mt-gd-%BOOST_NELSON%.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\boost_bzip2-%VC_VERSION%-mt-gd-%BOOST_NELSON%.dll
copy boost\lib\boost_zlib-%VC_VERSION%-mt-gd-%BOOST_NELSON%.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\boost_zlib-%VC_VERSION%-mt-gd-%BOOST_NELSON%.dll
copy boost\lib\boost_serialization-%VC_VERSION%-mt-gd-%BOOST_NELSON%.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\boost_serialization-%VC_VERSION%-mt-gd-%BOOST_NELSON%.dll

copy boost\LICENSE_1_0.txt %NELSON_DIR%\bin\%PLATFORM_NELSON%\LICENSE_1_0.txt

rem GetText
mkdir %NELSON_DIR%\tools\gettext
xcopy /E /Y gettext %NELSON_DIR%\tools\gettext 

rem CMake
xcopy /E /Y .\cmake %NELSON_DIR%\tools\cmake\

rem QT dependencies
copy %QTDIR%\bin\qhelpgenerator.exe %NELSON_DIR%\bin\%PLATFORM_NELSON%\qhelpgenerator.exe
copy %QTDIR%\bin\qcollectiongenerator.exe %NELSON_DIR%\bin\%PLATFORM_NELSON%\qcollectiongenerator.exe
copy %QTDIR%\bin\assistant.exe %NELSON_DIR%\bin\%PLATFORM_NELSON%\assistant.exe
copy %QTDIR%\bin\icudt5?.dll    %NELSON_DIR%\bin\%PLATFORM_NELSON%\icudt5?.dll
copy %QTDIR%\bin\icuin5?.dll    %NELSON_DIR%\bin\%PLATFORM_NELSON%\icuin5?.dll
copy %QTDIR%\bin\icuuc5?.dll    %NELSON_DIR%\bin\%PLATFORM_NELSON%\icuuc5?.dll
xcopy /E /Y %QTDIR%\plugins %NELSON_DIR%\bin\%PLATFORM_NELSON%\plugins\
rmdir %NELSON_DIR%\bin\%PLATFORM_NELSON%\plugins\bearer /s /Q
rmdir %NELSON_DIR%\bin\%PLATFORM_NELSON%\plugins\designer /s /Q
rmdir %NELSON_DIR%\bin\%PLATFORM_NELSON%\plugins\qmltooling /s /Q
rmdir %NELSON_DIR%\bin\%PLATFORM_NELSON%\plugins\position /s /Q
rmdir %NELSON_DIR%\bin\%PLATFORM_NELSON%\plugins\playlistformats /s /Q
rmdir %NELSON_DIR%\bin\%PLATFORM_NELSON%\plugins\mediaservice /s /Q
rmdir %NELSON_DIR%\bin\%PLATFORM_NELSON%\plugins\geoservices /s /Q
rmdir %NELSON_DIR%\bin\%PLATFORM_NELSON%\plugins\audio /s /Q
rmdir %NELSON_DIR%\bin\%PLATFORM_NELSON%\plugins\generic /s /Q
xcopy /E /Y %QTDIR%\qml %NELSON_DIR%\bin\%PLATFORM_NELSON%\qml\
copy %QTDIR%\qml\QtCanvas3D\qtcanvas3d.dll  %NELSON_DIR%\bin\%PLATFORM_NELSON%\qml\QtCanvas3D\
rmdir %NELSON_DIR%\bin\%PLATFORM_NELSON%\qml\QtBluetooth /s /Q
rmdir %NELSON_DIR%\bin\%PLATFORM_NELSON%\qml\QtLocation /s /Q
rmdir %NELSON_DIR%\bin\%PLATFORM_NELSON%\qml\QtNfc /s /Q
rmdir %NELSON_DIR%\bin\%PLATFORM_NELSON%\qml\QtPositioning /s /Q
rmdir %NELSON_DIR%\bin\%PLATFORM_NELSON%\qml\QtTest /s /Q
copy %QTDIR%\bin\d3dcompiler_*.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\libEGL.dll  %NELSON_DIR%\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\libGLESv2.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\opengl32sw.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?3DCore?.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?3DExtras?.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?3DInput?.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?3DLogic?.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?3DQuick?.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?3DQuickExtras?.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?3DQuickInput?.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?3DQuickRender?.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?3DRender?.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?CLucene?.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?Concurrent?.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?Core?.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?DBus?.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?Gui?.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?Help?.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?Multimedia?.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?MultimediaQuick_p?.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?MultimediaWidgets?.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?Network?.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?OpenGL?.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?PrintSupport?.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?Qml?.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?Quick?.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?QuickControls2?.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?QuickParticles?.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?QuickTemplates2?.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?QuickWidgets?.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?Sensors?.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?Sql?.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?Svg?.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?WebChannel?.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?WebEngine?.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?WebEngineCore?.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?WebEngineWidgets?.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?WebSockets?.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?WebView?.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?Widgets?.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?WinExtras?.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?QmlWorkerScript?.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?QmlModels?.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?QuickControls2Impls?.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?QuickControls2Impl.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?QuickControls2Impld.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\

rem QT 6 required
copy %QTDIR%\bin\Qt?QuickLayouts?.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\

rem QT 6.7 required
copy %QTDIR%\bin\Qt?QuickControls2Basic?.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?QuickControls2Fusion.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?QuickControls2FusionStyleImpl.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?QuickControls2FusionStyleImpld.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\

rem QT 6.8 required
copy %QTDIR%\bin\Qt?QmlMetad.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\
copy %QTDIR%\bin\Qt?QmlMeta.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\

rem vc runtime
copy .\vc14.3-runtime\*.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\*.dll
copy .\vc14.3-runtime\*.exe  %NELSON_DIR%\bin\%PLATFORM_NELSON%\*.exe

rem intel runtime
copy .\intel-runtime\*.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\*.dll

rem MKL blas, lapack, FFTW, VML wrapper
mkdir %NELSON_DIR%\bin\%PLATFORM_NELSON%\mkl
copy .\mkl\mkl_license.txt %NELSON_DIR%\bin\%PLATFORM_NELSON%\mkl\mkl_license.txt
copy .\mkl\mkl_license.txt %NELSON_DIR%\bin\%PLATFORM_NELSON%\mkl_license.txt

copy .\mkl\blas-lapack-wrapper\bin\*.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\mkl\*.*
copy .\mkl\blas-lapack-wrapper\lib\*.lib %NELSON_DIR%\bin\%PLATFORM_NELSON%\mkl\*.*
copy .\mkl\fftw-wrapper\bin\*.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\mkl\*.*
copy .\mkl\omp\bin\*.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\mkl\*.*
copy .\mkl\vml\bin\*.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\mkl\*.*

copy .\mkl\blas-lapack-wrapper\bin\*.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\*.dll
copy .\mkl\blas-lapack-wrapper\lib\*.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\*.lib
copy .\mkl\fftw-wrapper\bin\*.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\*.dll
copy .\mkl\omp\bin\*.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\*.dll
copy .\mkl\vml\bin\*.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\*.dll

rem ICU library
copy icu\bin\*.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\*.dll

rem libxml2  dependencies
copy .\zlib\bin\zlib.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\zlib.dll
copy .\libxml2\bin\libxml2.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\libxml2.dll
copy .\libxml2\bin\libiconv.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\libiconv.dll

rem openblas
mkdir %NELSON_DIR%\bin\%PLATFORM_NELSON%\openblas
copy .\openblas\bin\*.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\openblas\*.dll

rem mpi library
copy .\mpi\License\license_sdk.rtf %NELSON_DIR%\bin\%PLATFORM_NELSON%\license_sdk.rtf
copy .\mpi\MSMpiSetup.exe %NELSON_DIR%\bin\%PLATFORM_NELSON%\MSMpiSetup.exe

rem hdf5 dependencies
copy .\hdf5\bin\*.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\*.dll
copy .\hdf5\bin\*.exe %NELSON_DIR%\bin\%PLATFORM_NELSON%\*.exe

rem curl
copy .\curl\bin\*.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\*.dll

rem http-parser
copy .\http-parser\bin\*.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\*.dll

rem icu
copy .\icu\bin\*.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\*.dll

rem libffi
copy .\libffi\bin\*.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\*.dll

rem libgit2
copy .\libgit2\bin\*.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\*.dll

rem libiconv
copy .\libiconv\bin\*.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\*.dll

rem liblzma
copy .\liblzma\bin\*.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\*.dll

rem libsndfile
copy .\libsndfile\bin\*.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\*.dll

rem libxml2
copy .\libxml2\bin\*.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\*.dll

rem matio
copy .\matio\bin\*.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\*.dll

rem pcre
copy .\pcre\bin\*.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\*.dll

rem portaudio
copy .\portaudio\bin\*.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\*.dll

rem slicot
copy .\slicot\bin\*.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\*.dll

rem szip
copy .\szip\bin\*.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\*.dll

rem taglib
copy .\taglib\bin\*.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\*.dll

rem zlib
copy .\zlib\bin\*.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\*.dll

rem libgif
copy .\libgif\bin\*.dll %NELSON_DIR%\bin\%PLATFORM_NELSON%\*.dll
