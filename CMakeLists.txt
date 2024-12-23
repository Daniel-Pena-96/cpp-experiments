cmake_minimum_required(VERSION 3.0 FATAL_ERROR)

add_definitions(-std=c++11)
include_directories(inc)

project(hello)
include_directories(src/pointers/_inc)
add_executable(hello src/main.cpp src/pointers/pointers.cpp)
target_include_directories(hello PRIVATE ${PROJECT_SOURCE_DIR}/src/pointers)

project(test)
add_executable(test test/main_test.cpp)
