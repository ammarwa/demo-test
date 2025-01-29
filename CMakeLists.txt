cmake_minimum_required(VERSION 3.21 FATAL_ERROR)

project(demo LANGUAGES C CXX VERSION 0.1.0)

add_library(shape shape.cpp)

function(add_shape_executable SHAPE_NAME)
  message("-- New Shape Detected: ${SHAPE_NAME}")
  add_executable(${SHAPE_NAME} ${ARGN})
  target_link_libraries(${SHAPE_NAME} PRIVATE shape)
  target_include_directories(${SHAPE_NAME} PRIVATE ${PROJECT_SOURCE_DIR})
endfunction()