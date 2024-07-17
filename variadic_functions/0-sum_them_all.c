#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all -  function that returns the
 * sum of all its parameters.
 * @n: unsigned int.
 * Return: sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int sum = 0;
	unsigned int ct = 0;

	va_start(args, n);
	if (n == 0)
	{
		return (0);
	}
	while (ct < n)
	{
		sum += va_arg(args, int);
		ct++;
	}

	va_end(args);

	return (sum);
}
