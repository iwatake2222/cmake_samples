find_package(CUDA REQUIRED)
if(CUDA_FOUND)
	message("Cuda version: " ${CUDA_VERSION})
	CUDA_ADD_LIBRARY(CudaVecDouble STATIC
		CudaVecDouble.cu
		CudaVecDouble.h
	)
endif()
