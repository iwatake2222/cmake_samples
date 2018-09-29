cmake_minimum_required(VERSION 2.8)
project(MyOpenCVProject)

# Copy resouce
file(COPY ${CMAKE_SOURCE_DIR}/resource/ DESTINATION ${PROJECT_BINARY_DIR}/resource/)
add_definitions(-DRESOURCE_DIR="${PROJECT_BINARY_DIR}/resource/")

# Include projects
add_subdirectory(${PROJECT_SOURCE_DIR}/Main Main)
