cmake_minimum_required(VERSION 3.3)
project(test_build)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(BUILD_1 registrationSystem)
set(SOURCE_FILES_1 pst/week1.2/registrationSystem.cpp)
add_executable(${BUILD_1} ${SOURCE_FILES_1})

set(BUILD_2 makeThemOdd)
set(SOURCE_FILES_2 pst/week1.2/makeThemOdd.cpp)
add_executable(${BUILD_2} ${SOURCE_FILES_2})
#
#set(BUILD_2 diverseTeam)
#set(SOURCE_FILES_2 week1.1/diverseTeam.cpp)
#add_executable(${BUILD_2} ${SOURCE_FILES_2})