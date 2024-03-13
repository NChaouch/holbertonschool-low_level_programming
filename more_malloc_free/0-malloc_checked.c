#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Write a function that allocates memory using malloc
 * @b: Number of bytes to allocate
 * Return: Pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *memory_ptr;

	memory_ptr = malloc(b);

	if (memory_ptr == NULL)
	{
		exit(98);
	}

	return (memory_ptr);
}
