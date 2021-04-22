#include <cstdio>
#include "SubModuleA/SubModuleA.h"
#include "SubModuleB/SubModuleB.h"

int main()
{
	printf("\n--------\n");
	SubModuleA_api();
	printf("\n--------\n");
	SubModuleB_api();

	return 0;
}
