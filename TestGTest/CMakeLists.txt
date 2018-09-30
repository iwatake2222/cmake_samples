cmake_minimum_required(VERSION 2.8)
project(MyGTestProject)

# Create Main project
set(SOURCES
	main.cpp
)

set(HEADERS
	# main.h
)

add_executable(Main
	${SOURCES}
	${HEADERS}
)

# For GoogleTest
include(cmakes/gtest.cmake)
if (CMAKE_VERSION VERSION_LESS 2.8.11)
	target_include_directories(Main PUBLIC "${gtest_SOURCE_DIR}/include")
endif()
target_link_libraries(Main gtest_main)