#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *array_range - function that creates an array of integers.
 * @min: integer.
 * @max: integer.
 * Return: array.
 */
int *array_range(int min, int max)
{
	int size = 0;
	int *array = 0;
	int ct = 0;

	if (min > max)
	{
		return (NULL);
	}

	/* Calculate table size (-1 include max and min)*/
	size = max - min + 1;

	/* Allocate memory for the board */
	array = malloc(sizeof(int) * size);

	/* Check if allocation was successful */
	if (array == NULL)
	{
		return (NULL);
	}

	/* Fill in the table with values from min to max */
	while (ct < size)
	{
		array[ct] = min + ct;
		ct++;
	}

	/* Return the allocated table */
	return (array);
}
