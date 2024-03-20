#include "variadic_functions.h"
/**
 * print_strings - Write a function that prints strings, followed by a new line
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int count;
	char *string;

	va_start(args, n); /* Initialization of the variable argument list */

	for (count = 0; count < n; count++) /* Traverse all arguments */
	{
		string = va_arg(args, char *);
		printf("%s", string); /* Printing the string */

		if (separator != NULL && count < n - 1) /* Check presence of the separator */
							   /*and the current position in the list */
		{
			printf("%s", separator); /* Printing the separator */
		}

	}

	printf("\n"); /* Printing a newline character at the end */

	va_end(args); /* End of the arguments */

}
