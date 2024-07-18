#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers -  function that prints numbers,
 * followed by a new line.
 * @separator: pointer to the const char.
 * @n: const unsigned int.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int ct = 0;

	va_start(args, n);

	while (ct < n)
	{
		printf("%d", va_arg(args, int));

		if (ct < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}

		ct++;
	}

		va_end(args);

		printf("\n");
	}

