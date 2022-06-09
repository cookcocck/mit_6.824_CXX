include_directories(${CMAKE_CURRENT_LIST_DIR}/../include)
file(GLOB_RECURSE ALL_SOURCES LIST_DIRECTORIES true *.cpp)
add_library(${CMAKE_PROJECT_NAME}_lib ${ALL_SOURCES})
