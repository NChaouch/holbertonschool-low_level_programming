#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *_calloc - function that allocates memory
 * for an array, using malloc.
 * @nmemb: numbers of elements (unsigned int).
 * @size: for each elements (unsigned int).
 * Return: p if success.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int ct, total_size;
	char *char_p;

	if (nmemb == 0 && size == 0)
	{
		return (NULL);
	}

	/* Calculating the total size to be allocated */
	total_size = nmemb * size;

	/* Memory allocation of total_size bytes to p */
	p = malloc(total_size);

	if (p == NULL)
	{
		return (NULL);
	}

	/* Convert pointer p to char* character pointer */
	char_p = (char *)p;

	for (ct = 0; ct < total_size; ct++)
	{
		char_p[ct] = 0; /* Allocate zero to each allocated byte */
	}

	return (p); /* Returns the pointer p pointing to */
			/* the allocated and initialized memory */

}
