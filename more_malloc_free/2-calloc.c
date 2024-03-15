#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _calloc - Write a function that allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size of each element
 * Return: pointer to allocated memory,
 * NULL if malloc fails or nmemb or size is 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memory_ptr;
	unsigned int result_size;
	unsigned int count;

	if (nmemb == 0 || size == 0) /* Check if nb or size is equal to 0 */
	return (NULL);


	result_size = nmemb * size; /* Calculate total size required */
	memory_ptr = malloc(result_size); /* Dynamic memory allocation */

	if (memory_ptr == NULL) /* Check if malloc has failed */
	return (NULL);

	for (count = 0; count < result_size; count++)
	{
		*((char *)memory_ptr + count) = 0; /* Initialize memory to zero */
	}

	return (memory_ptr); /* Return pointer to allocated memory */
}
