#include "main.h"

/**
 * print_diagonal - Print line diagonal
 * @n: integer
 */
void print_square(int size)
{
	int count;
	int space;

	if (size > 0)
	{
		for (count = 0; count < size; count++)
		{
			for (space = 0; space < size; space++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}    
