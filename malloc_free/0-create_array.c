#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size : The size of the array
 * @c : The char to fill in the array
 *
 * Return: The array @array filled
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int count;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (count = 0; count < size; count++)
	{
		array[count] = c;
	}

	return (array);
}

