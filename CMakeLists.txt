cmake_minimum_required(VERSION 3.3)
project(c)

include_directories(pthreads_examples)
add_subdirectory (pthreads_examples)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -pthread")

set(SOURCE_FILES main.cpp)
add_executable(c ${SOURCE_FILES})