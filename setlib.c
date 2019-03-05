#include <stdio.h>
#include "setlib.h"

void printArray (set *the_set)
{
	for (int i = 0; i < the_set->size; ++i)
		printf("%i ", the_set->set[i]);

	printf("\n");
}
