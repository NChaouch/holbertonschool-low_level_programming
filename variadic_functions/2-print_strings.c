#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - function that prints strings,
 * followed by a new line.
 * @separator: pointer to the const char.
 * @n: const unsigned int.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int ct = 0;
	char *str;

	va_start(args, n);

	while (ct < n)
	{
		str = va_arg(args, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}

		else
		{
			printf("%s", str);
		}

		if (ct < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}

		ct++;
	}

	va_end(args);

	printf("\n");
}
