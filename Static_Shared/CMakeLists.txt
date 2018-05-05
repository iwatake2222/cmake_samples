project("Sample02") 
cmake_minimum_required(VERSION 3.0)

file(GLOB SOURCES
	"Main.cpp"
)

set(MAIN_BIN_NAME Sample02)
add_executable(${MAIN_BIN_NAME} ${SOURCES})

add_subdirectory(SubModuleStatic)
target_link_libraries(${MAIN_BIN_NAME} SubModuleStatic)
add_subdirectory(SubModuleDynamic)
target_link_libraries(${MAIN_BIN_NAME} SubModuleDynamic)

set(CMAKE_C_FLAGS "-Wall")
set(CMAKE_C_FLAGS_DEBUG "-g3 -O0 -pg")
set(CMAKE_C_FLAGS_RELEASE "-O2 -s")
set(CMAKE_CXX_FLAGS "-Wall")
set(CMAKE_CXX_FLAGS_DEBUG "-g3 -O0 -pg")
set(CMAKE_CXX_FLAGS_RELEASE "-O2 -s")

