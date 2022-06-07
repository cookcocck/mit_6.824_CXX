cmake_minimum_required(VERSION 3.19)
project(LAB1 LANGUAGES CXX)

# ---------------------------------------------------------------------------------------
# Start project
# ---------------------------------------------------------------------------------------
include(cmake/ide.cmake)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED true)

add_library(mapreduce SHARED ${ALL_SOURCES})
add_executable(lab1 main.cpp)
target_link_libraries(lab1 mapreduce)
