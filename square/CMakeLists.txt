add_executable(square square.cpp)
target_link_libraries(square PRIVATE shape)
target_include_directories(square PRIVATE ${PROJECT_SOURCE_DIR})