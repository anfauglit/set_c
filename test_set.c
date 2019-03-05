#include <stdio.h>
#include "setlib.h"
#include <stdlib.h>

int main (void)
{
	set* A = malloc (sizeof(set));
	int test[] = {0,1,2,3,4,5,6,7,8,9};

	A->size = 10;
	A->set = test;

	printArray (A);

	free(A);

	return 0;
}
