file(GLOB SOURCES "./*.c" "./*.cpp")
add_library(SubModuleStatic STATIC ${SOURCES})
target_include_directories(SubModuleStatic PUBLIC ${CMAKE_CURRENT_LIST_DIR})

