set VC_VERSION=vc140
set BOOST_VERSION=1_61
set SRC=D:\boost_1_61_0_x86\lib32-msvc-14.0
set DST=D:\Developpements\NelSon\Nelson-thirdparty-win32\boost\lib
mkdir %DST%
copy %SRC%\boost_chrono-%VC_VERSION%-mt-%BOOST_VERSION%.dll %DST%
copy %SRC%\boost_chrono-%VC_VERSION%-mt-%BOOST_VERSION%.lib %DST%
copy %SRC%\boost_chrono-%VC_VERSION%-mt-gd-%BOOST_VERSION%.dll %DST%
copy %SRC%\boost_chrono-%VC_VERSION%-mt-gd-%BOOST_VERSION%.lib %DST%

copy %SRC%\boost_date_time-%VC_VERSION%-mt-%BOOST_VERSION%.dll %DST%
copy %SRC%\boost_date_time-%VC_VERSION%-mt-%BOOST_VERSION%.lib %DST%
copy %SRC%\boost_date_time-%VC_VERSION%-mt-gd-%BOOST_VERSION%.dll %DST%
copy %SRC%\boost_date_time-%VC_VERSION%-mt-gd-%BOOST_VERSION%.lib %DST%

copy %SRC%\boost_filesystem-%VC_VERSION%-mt-%BOOST_VERSION%.dll %DST%
copy %SRC%\boost_filesystem-%VC_VERSION%-mt-%BOOST_VERSION%.lib %DST%
copy %SRC%\boost_filesystem-%VC_VERSION%-mt-gd-%BOOST_VERSION%.dll %DST%
copy %SRC%\boost_filesystem-%VC_VERSION%-mt-gd-%BOOST_VERSION%.lib %DST%

copy %SRC%\boost_iostreams-%VC_VERSION%-mt-%BOOST_VERSION%.dll %DST%
copy %SRC%\boost_iostreams-%VC_VERSION%-mt-%BOOST_VERSION%.lib %DST%
copy %SRC%\boost_iostreams-%VC_VERSION%-mt-gd-%BOOST_VERSION%.dll %DST%
copy %SRC%\boost_iostreams-%VC_VERSION%-mt-gd-%BOOST_VERSION%.lib %DST%

copy %SRC%\boost_program_options-%VC_VERSION%-mt-%BOOST_VERSION%.dll %DST%
copy %SRC%\boost_program_options-%VC_VERSION%-mt-%BOOST_VERSION%.lib %DST% 
copy %SRC%\boost_program_options-%VC_VERSION%-mt-gd-%BOOST_VERSION%.dll %DST%
copy %SRC%\boost_program_options-%VC_VERSION%-mt-gd-%BOOST_VERSION%.lib %DST%

copy %SRC%\boost_system-%VC_VERSION%-mt-%BOOST_VERSION%.dll %DST%
copy %SRC%\boost_system-%VC_VERSION%-mt-%BOOST_VERSION%.lib %DST%
copy %SRC%\boost_system-%VC_VERSION%-mt-gd-%BOOST_VERSION%.dll %DST%
copy %SRC%\boost_system-%VC_VERSION%-mt-gd-%BOOST_VERSION%.lib %DST%

copy %SRC%\boost_thread-%VC_VERSION%-mt-%BOOST_VERSION%.dll %DST%
copy %SRC%\boost_thread-%VC_VERSION%-mt-%BOOST_VERSION%.lib %DST%
copy %SRC%\boost_thread-%VC_VERSION%-mt-gd-%BOOST_VERSION%.dll %DST%
copy %SRC%\boost_thread-%VC_VERSION%-mt-gd-%BOOST_VERSION%.lib %DST%

copy %SRC%\boost_locale-%VC_VERSION%-mt-%BOOST_VERSION%.dll %DST%
copy %SRC%\boost_locale-%VC_VERSION%-mt-%BOOST_VERSION%.lib %DST%
copy %SRC%\boost_locale-%VC_VERSION%-mt-gd-%BOOST_VERSION%.dll %DST%
copy %SRC%\boost_locale-%VC_VERSION%-mt-gd-%BOOST_VERSION%.lib %DST%

copy %SRC%\boost_regex-%VC_VERSION%-mt-%BOOST_VERSION%.dll %DST%
copy %SRC%\boost_regex-%VC_VERSION%-mt-%BOOST_VERSION%.lib %DST%
copy %SRC%\boost_regex-%VC_VERSION%-mt-gd-%BOOST_VERSION%.dll %DST%
copy %SRC%\boost_regex-%VC_VERSION%-mt-gd-%BOOST_VERSION%.lib %DST%
