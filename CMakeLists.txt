cmake_minimum_required(VERSION 3.19)
project(LAB1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED true)

add_subdirectory(src)

include_directories(third_party)

add_executable(lab1 main.cpp)
target_link_libraries(lab1
        PUBLIC
        ${CMAKE_SOURCE_DIR}/lib/librpc.a
        ${CMAKE_SOURCE_DIR}/lib/libspdlog.a
        mapreduce)

