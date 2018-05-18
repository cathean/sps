cmake_minimum_required(VERSION 3.11)
project(sps)

#Version number of the program
set(sps MAJOR 1)
set(sps MINOR 0)

set(BOOST_INCLUDE "default_value" CACHE PATH "Boost header path")
set(BOOST_LIB "default_value" CACHE FILEPATH "Boost linker file xxxx")

include_directories(include)
include_directories(${BOOST_INCLUDE})

add_executable(sps src/main.cpp)
target_link_libraries(sps
	-lws2_32
	${BOOST_LIB}
)
