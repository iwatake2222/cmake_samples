if(${BUILD_TARGET} STREQUAL PC)
	set(SOURCES
		src/ModuleB_PC.cpp
	)
elseif(${BUILD_TARGET} STREQUAL RASPI_NATIVE OR ${BUILD_TARGET} STREQUAL RASPI_CROSS)
	set(SOURCES
		src/ModuleB_RASPI.c
	)
endif()

set(HEADERS
	export/ModuleB.h
)

add_library(ModuleB STATIC
	${SOURCES}
	${HEADERS}
)

target_include_directories(ModuleB PUBLIC
	./export
)
