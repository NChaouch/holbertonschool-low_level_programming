#include "main.h"
/**
 * print_chessboard - function that prints
 * the chessboard.
 * @a: pointer to the character.
 */
void print_chessboard(char (*a)[8])
{
	int i_row, i_column;

	for (i_row = 0; i_row < 8; i_row++)
	{
		for (i_column = 0; i_column < 8; i_column++)
		{
			_putchar(a[i_row][i_column]);
		}

		_putchar('\n');
	}
}
