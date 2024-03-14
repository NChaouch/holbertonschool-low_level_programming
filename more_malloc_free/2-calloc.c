#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _calloc - Write a function that allocates memory for an array, using malloc
 * @nb: number of elements
 * @size: size of each element
 * Return: pointer to allocated memory,
 * NULL if malloc fails or nb or size is 0
 */
void *_calloc(unsigned int nb, unsigned int size)
{
	void *memory_ptr; /* Declaration of a pointer */
	unsigned int result_size; /* Declaration of a variable */
	unsigned int count; /* Declaration of a variable */

	if (nb == 0 || size == 0) /* Check if nb or size is equal to 0 */
	return (NULL); /* Return NULL if one of the parameters is 0 */


	result_size = nb * size; /* Calculate total size required */
	memory_ptr = malloc(result_size); /* Dynamic memory allocation */

	if (memory_ptr == NULL) /* Check if malloc has failed */
	return (NULL); /* Return NULL if allocation failed */

	for (count = 0; count < result_size; count++)
	{
		*((char *)memory_ptr + count) = 0; /* Initialize memory to zero */
	}

	return (memory_ptr); /* Return pointer to allocated memory */
}
