#include "main.h"
/**
 * reverse_array -  function that reverses the content
 * of an array of integers.
 * @a: pointer to the integer.
 * @n: the number of elements of the array.
 */
void reverse_array(int *a, int n)
{
	int ct;
	int tp;

	for (ct = 0; ct < n / 2; ct++)
	{
		tp = a[ct];
		a[ct] = a[n - 1 - ct];
		a[n - 1 - ct] = tp;
	}
}
