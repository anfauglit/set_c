#include <stddef.h>

typedef struct
{
	size_t size;
	int* set;
} set;

void printArray (set* set);

set* rnd_int_array (size_t size);

int free_set (set* the_set);
