#include <stdio.h>
#include "setlib.h"
#include <stdlib.h>

void printArray (set *the_set)
{
	for (int i = 0; i < the_set->size; ++i)
		printf("%i ", the_set->set[i]);

	printf("\n");
}

set* rnd_int_array (size_t size)
{
	set* the_set;

	the_set = malloc(sizeof(set));

	if (the_set == NULL)
	{
		fprintf(stderr, "Failed to allocate memory\n");
		return NULL;
	}

	the_set->size = size;

	int* array;
	array = malloc( sizeof(int)*size );

	the_set->set = array;

	for (int i = 0; i < size; ++i)
		array[i] = rand() % 100;

	return the_set;
}

int free_set (set* the_set)
{
	free(the_set->set);
	free(the_set);
}
