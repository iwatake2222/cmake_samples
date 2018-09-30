cmake_minimum_required(VERSION 2.8)
project(MyCudaProject)

# For CUDA
find_package(CUDA REQUIRED)
if(CUDA_FOUND)
	message("Cuda version: " ${CUDA_VERSION})
	CUDA_ADD_EXECUTABLE(Main
		main.cu
	)
endif()
