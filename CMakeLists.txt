cmake_minimum_required(VERSION 3.19)
project(LAB1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED true)

add_subdirectory(src)
add_subdirectory(tests)

include_directories(include)
add_executable(lab1 main.cpp)
target_link_libraries(lab1 PRIVATE
        ${CMAKE_PROJECT_NAME}_lib
        ${CMAKE_SOURCE_DIR}/lib/librpc.a
        ${CMAKE_SOURCE_DIR}/lib/libspdlog.a
        )
target_include_directories(lab1 PUBLIC third_party)