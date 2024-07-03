cmake_minimum_required(VERSION 3.18)
project(Ex_ProgrammingLab_Note)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(test)

set(SOURCE_FILES Note.cpp Note.h)
add_executable(Ex_ProgrammingLab_Note main.cpp)
add_library(core ${SOURCE_FILES})
target_link_libraries(Ex_ProgrammingLab_Note core)