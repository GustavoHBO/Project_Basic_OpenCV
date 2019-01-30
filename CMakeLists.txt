cmake_minimum_required(VERSION 2.8)
 # Enable C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)
project( DisplayImage )
find_package( OpenCV REQUIRED )
include_directories( ${OpenCV_INCLUDE_DIRS} )
add_executable( example src/main.cpp )
target_link_libraries( example ${OpenCV_LIBS} )