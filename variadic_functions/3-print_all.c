#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - function that prints anything.
 * *: const char.
 * @format: character string indicating argument types
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int ct = 0;
	char *str;
	char *sep = "";

	va_start(args, format);
	while (format && format[ct])
	{
		switch (format[ct])
		{
			case 'c':
				printf("%s%c", sep, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (!str)
					str = "(nil)";
				printf("%s%s", sep, str);
				break;
			default:
				ct++;
				continue;
		}
		sep = ", ";
		ct++;
	}
	printf("\n");
	va_end(args);
}
