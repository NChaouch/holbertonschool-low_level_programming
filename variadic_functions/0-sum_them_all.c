#include "variadic_functions.h"

/**
 * sum_them_all - Write a function that returns the sum of all its parameters.
 * @n: the number of parameters.
 * Return:
 * If n == 0, the function return 0.
 * But, this  n > 0, it returns the sum.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int sum = 0, index;

	/* Initialize the va_list variable */
	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}

	/* Is moving the arguments */
	for (index = 0; index < n; index++)
	{
		/* Get the next argument of type int */
		sum += va_arg(args, int);
	}

	/* End of use of the arguments */
	va_end(args);

	/* Return the calculated sum */
	return (sum);
}
