#include "function_pointers.h"
/**
 * int_index - Write a function that searches for an integer
 * @array: pointer to the array
 * @size: size of the array
 * @cmp: pointer to the function used to compare
 * Return: -1 if not correct.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int count;

	if (size > 0) /* Checks if array size is greater than 0 */
	{
		if (array != NULL && cmp != NULL) /* Checks if pointers are not null */
		{
			for (count = 0; count < size; count++) /* Traverse the array */
			{
				if (cmp(array[count])) /* Call the comparison function on each element */
				{
					return (count); /* Return the index if comparison is true */
				}
			}
		}
	}

	return (-1); /* Return -1 if no element matches or if size <= 0 */
}
