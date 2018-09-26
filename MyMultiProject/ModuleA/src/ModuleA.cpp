#include <stdio.h>
#include "ModuleA.h"
#include "ModuleB.h"

void ModuleA_func()
{
	printf("ModuleA_func called\n");
	ModuleB_func();
}
