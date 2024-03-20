#include <stdarg.h>
/**
 * sum_them_all - Write a function that
 * returns the sum of all its parameters.
 * The function takes a variable number
 * of integers as arguments and calculates their sum.
 * @n: the number of parameters.
 * args: arguments of the function.
 * Return:
 * If n == 0, the function return 0.
 * But, this  n > 0, it returns the sum.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int count;
	int sum = 0;

	va_start(args, n); /* Initialize the va_list variable */
			      /* to start processing the arguments */

	if (n == 0)
		return (0);

	for (count = 0; count < n; count++) /* Is moving the arguments */
					       /* and calculate their sum */

		sum += va_arg(args, int); /* Get the next argument of type int */
					     /*from the va_list and add it to the sum */

	va_end(args); /* End of use of the arguments */

	return (sum); /* Return the calculated sum */

}
