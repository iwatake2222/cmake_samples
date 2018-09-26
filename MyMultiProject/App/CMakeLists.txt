set(SOURCES
	main.cpp
)

set(HEADERS
	# main.h
)

add_executable(App
	${SOURCES}
	${HEADERS}
)

target_link_libraries(App
	ModuleA
)

target_include_directories(App PUBLIC
	${PROJECT_SOURCE_DIR}/ModuleA/export
)
