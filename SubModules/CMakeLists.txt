cmake_minimum_required(VERSION 3.0)

set(PROJECT_NAME main)
project(${PROJECT_NAME}) 

set (CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

add_executable(${PROJECT_NAME} "Main.cpp")

add_subdirectory(SubModuleA)
target_link_libraries(${PROJECT_NAME} SubModuleA)

add_subdirectory(SubModuleB)
target_link_libraries(${PROJECT_NAME} SubModuleB)
