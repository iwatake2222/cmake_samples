#include <stdio.h>
#include <omp.h>

int main()
{
	omp_set_num_threads(4);
	#pragma omp parallel for
	for (int i = 0; i < 20; i++) {
		printf("%d / %d\n", omp_get_thread_num(), omp_get_num_threads());
	}

	return 0;
}
