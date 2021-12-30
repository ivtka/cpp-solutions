cmake_minimum_required(VERSION 3.22 FATAL_ERROR)
project(cpp-solutions)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(src)
add_subdirectory(lib)
add_subdirectory(test)