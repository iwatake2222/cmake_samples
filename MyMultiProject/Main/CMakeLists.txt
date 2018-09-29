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

target_link_libraries(Main
	ModuleA
)

target_include_directories(Main PUBLIC
	${PROJECT_SOURCE_DIR}/ModuleA/export
)
