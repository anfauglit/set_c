#include <stddef.h>

typedef struct
{
	size_t size;
	int* set;
} set;

void printArray (set* set);
