#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
/**
 * array_iterator - function that executes a function
 * given as a parameter on each element of an array.
 * @array: pointer to the integer.
 * @size: size_t of array.
 * @action: pointer to the function integer.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int ct = 0;

	if (array == NULL || action == NULL)
	{
		return;
	}

	while (ct < size)
	{
		action(array[ct]);
		ct++;
	}
}
