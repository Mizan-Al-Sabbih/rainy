cmake_minimum_required(VERSION 3.9)
project(rainy)

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")
set(source_code 
    lib/rainy/rainy.cpp)

add_executable(rainy ${source_code})

add_subdirectory(lib/packages/cpp-linenoise)

