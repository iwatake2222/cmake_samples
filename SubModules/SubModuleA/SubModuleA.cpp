#include <cstdio>
#include "SubModuleA.h"

int g_commonName = 10;

void funcCommonName()
{
	printf("funcCommonName in SubModuleA\n");
}

void SubModuleA_api(void)
{
	printf("SubModuleA_api\n");
	funcCommonName();
	printf("g_commonName = %d\n", g_commonName);
	return;
}
