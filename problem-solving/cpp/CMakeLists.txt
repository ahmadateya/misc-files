cmake_minimum_required(VERSION 3.3)
project(test_build)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(BUILD_1 streetParade)
set(SOURCE_FILES_1 pst/week1.1/streetParade.cpp)
add_executable(${BUILD_1} ${SOURCE_FILES_1})
#
#set(BUILD_2 diverseTeam)
#set(SOURCE_FILES_2 week1.1/diverseTeam.cpp)
#add_executable(${BUILD_2} ${SOURCE_FILES_2})