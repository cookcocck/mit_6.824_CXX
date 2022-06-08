set(HEADER_LIST
        "${PROJECT_SOURCE_DIR}/include/bqueue/bqueue.hpp"
        "${PROJECT_SOURCE_DIR}/include/master/master.h"
        "${PROJECT_SOURCE_DIR}/include/task/task.h"
)

add_library(mapreduce SHARED master.cpp task.cpp ${HEADER_LIST})

target_include_directories(
        mapreduce
        PUBLIC
        "${PROJECT_SOURCE_DIR}/include/bqueue"
        "${PROJECT_SOURCE_DIR}/include/master"
        "${PROJECT_SOURCE_DIR}/include/task"
)