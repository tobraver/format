cmake_minimum_required(VERSION 3.1.0)

project(format_example CXX)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

add_executable(format_example example.cpp)

# -l
target_link_libraries(format_example PRIVATE format)