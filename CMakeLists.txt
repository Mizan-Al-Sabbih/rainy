cmake_minimum_required(VERSION 3.9)
project(built)

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")
set(source_code lib/essentials/repl/src/token.cpp  lib/essentials/repl/src/Print.cpp)

add_executable(built ${source_code})
