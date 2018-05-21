#Minimum version of cmake to build this source code
cmake_minimum_required(VERSION 3.10)

project(sps)

#Version number of the program
set(sps_VERSION_MAJOR 1)
set(sps_VERSION_MINOR 0)

#Find boost package(version 1.67.0)
#The script from FindBoost
set(Boost_USE_STATIC_LIBS	ON)
set(Boost_USE_MULTITHREAD	ON)
set(Boost_USE_STATIC_RUNTIME	OFF)
find_package(Boost 1.67.0 COMPONENTS filesystem system thread)

if(Boost_FOUND)
	#Include directories
	include_directories(include)
	include_directories(${Boost_INCLUDE_DIRS})

	#add exec
	add_executable(sps src/main.cpp src/func_def.cpp)

	#Linking the main program
	target_link_libraries
	(
		sps
		${Boost_LIBRARIES}
	)
endif()
