#Minimum version of cmake to build this source code
cmake_minimum_required(VERSION 3.11)

project(sps)

#Version number of the program
set(sps MAJOR 1)
set(sps MINOR 0)

#Ask for Boost header path
set(BOOST_INCLUDE "default_value" CACHE PATH "Boost include path")
#Ask for Boost linker file path for 'system'
set(BOOST_LIB "default_value" CACHE FILEPATH "boost_system linker")

#Include directories
include_directories(include)
include_directories(${BOOST_INCLUDE})

add_executable(sps src/main.cpp src/func_def.cpp)

#Linking the main program
target_link_libraries(sps
	-lws2_32
	${BOOST_LIB}
)
