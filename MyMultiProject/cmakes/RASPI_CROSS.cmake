set(CMAKE_BUILD_TYPE release)
# set(CMAKE_BUILD_TYPE debug)
# or
# cmake ../project -DCMAKE_BUILD_TYPE=Release
# cmake ../project -DCMAKE_BUILD_TYPE=Debug

# cross compiler settings
set(CMAKE_CROSSCOMPILING TRUE)
set(CROSS_COMPILE "arm-linux-gnueabihf-")
set(CMAKE_C_COMPILER ${CROSS_COMPILE}gcc)
set(CMAKE_CXX_COMPILER ${CROSS_COMPILE}g++)
set(CMAKE_LINKER ${CROSS_COMPILE}gcc)

# root path settings
set(CMAKE_FIND_ROOT_PATH ~/raspberry/tools/arm-bcm2708/gcc-linaro-arm-linux-gnueabihf-raspbian-x64)
set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)	# use host system root for program
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)		# use CMAKE_FIND_ROOT_PATH for library
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)		# use CMAKE_FIND_ROOT_PATH for include
