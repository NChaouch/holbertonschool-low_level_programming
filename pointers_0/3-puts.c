#include "main.h"
/**
 *_puts -  prints a string, followed by a new line, to stdout
 *@str: character
 *
 *
*/

void _puts(char *str)
{
	int print;

	for (print = 0; str[print] != '\0'; print++)

	{
		_putchar(str[print]);
	}
	_putchar('\n');
}
