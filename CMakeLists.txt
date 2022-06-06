cmake_minimum_required(VERSION 3.19)
project(LAB1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED true)

add_executable(lab1 main.cpp)
target_include_directories(lab1 PRIVATE include third_party)
