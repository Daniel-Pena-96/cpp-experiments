cmake_minimum_required(VERSION 3.0 FATAL_ERROR)

add_definitions(-std=c++11)
include_directories(inc)
project(hello)
add_executable(hello src/main.cpp)

project(test)
add_executable(test test/main_test.cpp)
