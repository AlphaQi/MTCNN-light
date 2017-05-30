cmake_minimum_required(VERSION 2.8)
project(main)

set(QMAKE_CXXFLAGS "-std=c++11")
include_directories(/home/liqi/SoftInstallPart/openblas/include)
link_directories(/home/liqi/SoftInstallPart/openblas/lib)

find_package( OpenCV REQUIRED)

AUX_SOURCE_DIRECTORY(./src DIR_SRCS)
add_executable( main ${DIR_SRCS})
target_link_libraries( main ${OpenCV_LIBS} )
target_link_libraries( main openblas)
