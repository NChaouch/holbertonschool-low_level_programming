#include "main.h"
/**
 * times_table - function that prints the
 * 9 times table, starting with 0.
 *
 */
void times_table(void)
{
	int lines, col, num;

	for (lines = 0; lines <= 9; lines++)
	{
		for (col = 0; col <= 9; col++)
		{
			num = col * lines;

			if (col == 0)
			{
				_putchar(num + '0');
			}
			else if (num <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(num + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(num / 10 + '0');
				_putchar(num % 10 + '0');
			}

		}
			_putchar('\n');
	}
}
