cmake_minimum_required(VERSION 3.3)
project(c)

include_directories(pthreads_examples)
#add_subdirectory (pthreads_examples)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -pthread")

set(SOURCE_FILES main.cpp
        mem_alloc_example.cpp
        string_example.cpp
        struct_example.cpp
        pthreads_examples/create_threads.cpp
        pthreads_examples/assign_processor_for_thread.cpp
        pthreads_examples/join_threads.cpp
        submission_data/list.cpp
        submission_data/list.h work_with_files_examples/read_data_from_file.cpp work_with_files_examples/read_data_from_file.h submission_data/test_list.cpp submission_data/test_list.h)

set(HEADERS string_example.h
        struct_example.h)

#set(SOURCES )
add_executable(c ${SOURCE_FILES})