#include "main.h"
/**
 * print_line - function that draws a straight
 * line in the terminal.
 * @n: integer.
 */
void print_line(int n)
{
	int ct;

	if (n > 0)
	{
		for (ct = 0; ct < n; ct++)
		{
			_putchar('_');
		}
	}
	_putchar('\n'); /* if n is less than 0 */
}
