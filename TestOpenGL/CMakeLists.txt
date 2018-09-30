cmake_minimum_required(VERSION 2.8)
project(MyOpenGLProject)

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

target_include_directories(Main PUBLIC "C:/glfw-3.2.1.bin.WIN64/include")
target_link_libraries(Main "C:/glfw-3.2.1.bin.WIN64/lib-vc2015/glfw3.lib")

# For OpenGL
# find_package(OpenGL REQUIRED)
# if(OpenGL_FOUND)
# 	target_include_directories(Main PUBLIC ${OpenGL_INCLUDE_DIR})
# 	target_link_libraries(Main ${OpenGL_GL_LIBRARY})
# 	target_link_libraries(Main ${OpenGL_GLU_LIBRARY})
# endif()
