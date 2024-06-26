#include "main.h"
#include "2-strlen.c"
/**
 * puts_half - function that prints half of a string,
 * followed by a new line.
 * @str: pointer to the character.
 */
void puts_half(char *str)
{
	if (_strlen(str) % 2 == 0)
	{
		str = str + _strlen(str) / 2;
	}
	else
	{
		str = str + ((_strlen(str) + 1) / 2); /* - 1 is in order */
							/* to get even number */
	}
	while (*str)
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
