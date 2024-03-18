#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - Write a function that executes a function
 * @array: pointer to the array
 * @size: size of the array
 * @action: pointer to the function to be executed
*/
void array_iterator(int *array, size_t size, void (*action)(int))
	{
		size_t count;

		if (array == NULL || action == NULL)
			return;

		for (count = 0; count < size; count++)
		{
			action(array[count]);
		}
	}
