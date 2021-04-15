cmake_minimum_required(VERSION 3.3)
project(test_build)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

# week1.1 problems
set(BUILD_1 ferryLoadingVI)
set(SOURCE_FILES_1 pst/week1.1/ferryLoadingVI.cpp)
add_executable(${BUILD_1} ${SOURCE_FILES_1})

# week1.2 problems
set(BUILD_2 makeThemOdd)
set(SOURCE_FILES_2 pst/week1.2/makeThemOdd.cpp)
add_executable(${BUILD_2} ${SOURCE_FILES_2})

# week2.1 problems
set(BUILD_3 physicsPractical)
set(SOURCE_FILES_3 pst/week2.1/physicsPractical.cpp)
add_executable(${BUILD_3} ${SOURCE_FILES_3})