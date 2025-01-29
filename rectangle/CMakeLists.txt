add_executable(rectangle rectangle.cpp)
target_link_libraries(rectangle PRIVATE shape)
target_include_directories(rectangle PRIVATE ${PROJECT_SOURCE_DIR})