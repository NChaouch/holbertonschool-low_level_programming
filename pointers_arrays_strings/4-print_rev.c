#include "main.h"
#include "2-strlen.c"
/**
 *print_rev -  prints a string, in reverse, followed by a new line
 *@s: character string
 *
 *
*/

void print_rev(char *s)
{
	int print;

	for (print = 0 ; print < _strlen(s); print++)

	{
		_putchar(s[_strlen(s) - print - 1]);
	}
	_putchar('\n');
}
