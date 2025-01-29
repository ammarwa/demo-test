cmake_minimum_required(VERSION 3.21 FATAL_ERROR)

project(demo LANGUAGES C CXX VERSION 0.1.0)

add_library(shape shape.cpp)

add_subdirectory(rectangle)
add_subdirectory(square)