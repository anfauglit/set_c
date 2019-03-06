#include <stdio.h>
#include "setlib.h"
#include <stdlib.h>
#include <time.h>

int main (void)
{
	srand(time(NULL));

	set* A = rnd_int_array(10); 
	set* B = rnd_int_array(10);

	printArray (A);

	printArray (B);

	free_set(A);
	free_set(B);

	return 0;
}
