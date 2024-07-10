#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *malloc_checked - function that allocates memory using malloc.
 * @b: unsigned int (value positive or NULL).
 * Return: exit(98) if not success or (p_mem) if is success.
 */
void *malloc_checked(unsigned int b)
{
	void *p_mem;

	p_mem = malloc(b);

	if (p_mem == NULL)
	{
		exit(98);
	}

	return (p_mem);
}
