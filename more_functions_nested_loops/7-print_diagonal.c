#include "main.h"
/**
 * print_diagonal - function that draws a
 * diagonal line on the terminal.
 * @n: integer.
 */
void print_diagonal(int n)
{
	int ct;
	int space;

	if (n > 0)
	{
		for (ct = 0; ct < n; ct++)
		{
			for (space = 0; space < ct; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
	_putchar('\n'); /* if n is less than 0 */
	}
}
