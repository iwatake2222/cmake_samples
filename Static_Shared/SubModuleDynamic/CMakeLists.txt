file(GLOB SOURCES "./*.c" "./*.cpp")
add_library(SubModuleDynamic SHARED ${SOURCES})
target_include_directories(SubModuleDynamic PUBLIC ${CMAKE_CURRENT_LIST_DIR})
