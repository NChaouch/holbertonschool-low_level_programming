#include "main.h"
/**
 * print_square - function that prints a square,
 * followed by a new line.
 * @size: integer.
 */
void print_square(int size)
{
	int ctcol, ctrow;

	if (size > 0)
	{
		for (ctrow = 0; ctrow < size; ctrow++)
		{
			for (ctcol = 0; ctcol < size; ctcol++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}

	else
	{
		_putchar('\n'); /* if size is negative or zero */
	}
}
