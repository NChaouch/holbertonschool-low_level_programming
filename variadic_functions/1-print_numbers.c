#include "variadic_functions.h"
/**
 * print_numbers - Write a function that
 * prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int count;

	va_start(args, n); /* Initialization of the variable argument list */

	for (count = 0; count < n; count++) /* Traverse all arguments */
	{
		printf("%d", va_arg(args, int)); /* Printing the argument */

		if (separator != NULL && count < n - 1) /* Check presence of the separator */
							   /*and the current position in the list */
		{
			printf("%s", separator); /* Printing the separator */
		}

	}

	printf("\n"); /* Printing a newline character at the end */

	va_end(args); /* End of the arguments */

}
