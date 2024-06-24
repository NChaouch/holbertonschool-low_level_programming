#include "main.h"
/**
 * print_triangle - function that prints a triangle,
 * followed by a new line.
 * @size: integer.
 */
void print_triangle(int size)
{
	int ctrow, ctcol, space;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (ctrow = 0; ctrow < size; ctrow++)
	{
		for (space = 0; space < size - ctrow - 1; space++)
		{
			_putchar(' ');
		}
		for (ctcol = 0; ctcol <= ctrow; ctcol++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
