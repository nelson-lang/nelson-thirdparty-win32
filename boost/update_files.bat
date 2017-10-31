set VC_VERSION=vc141
set BOOST_VERSION=1_65_1
set SRC=D:\Developpements\boost_1_65_1_x86\lib32-msvc-14.1
set DST=D:\Developpements\GitHub\nelson-thirdparty-win32\boost\lib
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
