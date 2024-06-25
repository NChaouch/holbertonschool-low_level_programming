#include "main.h"
#include "2-strlen.c"
/**
 * print_rev - function that prints a string,
 * in reverse, followed by a new line.
 * @s: pointer to the character.
 */
void print_rev(char *s)
{
	int ct = 0;

	while (s[ct] != '\0')
	{
		_putchar(s[_strlen(s) - ct - 1]);
		ct++;
	}
	_putchar('\n');
}
