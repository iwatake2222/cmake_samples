#include <stdio.h>
#include "SubModuleDynamic/SubModuleDynamic.h"
#include "SubModuleStatic/SubModuleStatic.h"

int main()
{
	printf("Hello World\n");
	SubModuleStatic_func(10);
	SubModuleDynamic_func(20);
	return 0;
}


/*
cd SubModuleStatic
g++ -c *.cpp
ar r SubModuleStatic.a *.o
cd ..

cd SubModuleDynamic
g++ -c *.cpp
g++ -shared -fPIC -o libSubModuleDynamic.so *.o
cd ..

g++ -c Main.cpp
g++ Main.o SubModuleStatic/SubModuleStatic.a -L./SubModuleDynamic -lSubModuleDynamic
LD_LIBRARY_PATH=./SubModuleDynamic ./a.out
*/

/*
cmake .. -G "MSYS Makefiles"
make VERBOSE=1
./Sample02
*/
