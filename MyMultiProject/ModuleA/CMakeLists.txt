set(SOURCES
	src/ModuleA.cpp
)

set(HEADERS
	export/ModuleA.h
)

add_library(ModuleA STATIC
	${SOURCES}
	${HEADERS}
)

target_link_libraries(ModuleA
	ModuleB
)

target_include_directories(ModuleA PUBLIC
	./export
	${PROJECT_SOURCE_DIR}/ModuleB/export
)
