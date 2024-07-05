#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - function that returns the
 * natural square root of a number.
 * @n: integer.
 * Return: -1 if neg num has not natural
 * square root.
 * n if square root of 0 or 1 is it self.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1); /* Negative number has no natural square root */
	}

	if (n == 0 || n == 1)
	{
		return (n); /* Square root of 0 or 1 is itself */
	}

	return (_sqrt_recursion_helper(n, 0, n)); /* Start searching from 0 to n */
}

/**
 * _sqrt_recursion_helper - for do the function _sqrt_recursion.
 * @n: integer.
 * @low: integer.
 * @high: integer.
 * Return: -1 if not found.
 * mid if is found the exact square.
 *
 */
int _sqrt_recursion_helper(int n, int low, int high)
{
	int mid;
	long sq;

	if (low > high)
	{
		return (-1); /* Not found, return -1 */
	}

	mid = (low + high) / 2;
	sq = (long)mid * mid; /* Use long to avoid overflow */

	if (sq == n)
	{
		return (mid); /* Found the exact square root */
	}

	else if (sq < n)
	{
		/* Search in the upper half */
		return (_sqrt_recursion_helper(n, mid + 1, high));
	}

	else
	{
		/* Search in the lower half */
		return (_sqrt_recursion_helper(n, low, mid - 1));
	}
}

