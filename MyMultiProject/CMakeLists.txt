cmake_minimum_required(VERSION 2.8)
project(MyMultiProject)

# Switch build target
set(BUILD_TARGET PC CACHE STRING "Build target?")
set(LINK_ONLY OFF CACHE BOOL "Use pre-built library?")

# Common build settings
include(cmakes/common.cmake)

# Build settings for each target
if(${BUILD_TARGET} STREQUAL PC)
	if(WIN32)
		message("[BUILD] PC Windows")
		include(cmakes/PC_WIN.cmake)
	else()
		message("[BUILD] PC Linux")
		include(cmakes/PC_LINUX.cmake)
	endif()
elseif(${BUILD_TARGET} STREQUAL RASPI_NATIVE)
	message("[BUILD] Raspberry Pi Native")
	include(cmakes/RASPI_NATIVE.cmake)
elseif(${BUILD_TARGET} STREQUAL RASPI_CROSS)
	message("[BUILD] Raspberry Pi Cross")
	include(cmakes/RASPI_CROSS.cmake)
else()
	message(FATAL_ERROR "[BUILD] Invalid target")
endif()

# Use modules as pre-built libraries
if(${LINK_ONLY})
	if(WIN32)
		link_directories(${PROJECT_SOURCE_DIR}/ModuleA/export/${Configuration})
		link_directories(${PROJECT_SOURCE_DIR}/ModuleB/export/${Configuration})
	else()
		link_directories(${PROJECT_SOURCE_DIR}/ModuleA/export/)
		link_directories(${PROJECT_SOURCE_DIR}/ModuleB/export/)
	endif()
else()
	add_subdirectory(${PROJECT_SOURCE_DIR}/ModuleA ModuleA)
	add_subdirectory(${PROJECT_SOURCE_DIR}/ModuleB ModuleB)
	set_target_properties(ModuleA PROPERTIES ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/ModuleA/export)
	set_target_properties(ModuleB PROPERTIES ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/ModuleB/export)
endif()

# Include projects
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/output)
add_subdirectory(${PROJECT_SOURCE_DIR}/Main Main)
