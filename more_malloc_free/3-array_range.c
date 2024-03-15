#include "main.h"
#include <stdlib.h>
/**
 *array_range - Write a function that creates an array of integers
 *@min: min values
 *@max: max values
 *Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	/* Declarations of variables */
	int *array;
	int size;
	int count;

	if (min > max)
		return (NULL);

	size = max - min + 1; /* Calculate the size of the array */

	array = malloc(sizeof(int) * size); /* Allocate memory for the array */

	if (array == NULL)
		return (NULL);

	/* Populate the array with values from min to max */
	for (count = 0; count < size; count++)
	{
		array[count] = min + count;
	}

	return (array);
}
