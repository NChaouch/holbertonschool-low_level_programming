#include "main.h"
/**
 *print_chessboard -  Write a function that prints the chessboard
 *@a: character
 *
 *
*/
void print_chessboard(char (*a)[8])
{
	int index;
	int n;

	for (index = 0; a[index][7]; index++)
	{
		for (n = 0; n < 8; n++)
		{
			_putchar(a[index][n]);
		}
		_putchar('\n');
	}
}
