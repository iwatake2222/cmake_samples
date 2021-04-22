#include <cstdio>
#include "SubModuleB.h"

int g_commonName = 20;

void funcCommonName()
{
	printf("funcCommonName in SubModuleB\n");
}

void SubModuleB_api(void)
{
	printf("SubModuleB_api\n");
	funcCommonName();
	printf("g_commonName = %d\n", g_commonName);
	return;
}
