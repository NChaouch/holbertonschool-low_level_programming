#include "main.h"
#include "2-strlen.c"
#include "_putchar.c"
/**
 *rev_string -  Write a function that reverses a string
 *@s: character string
 *
 *
*/

void rev_string(char *s)
{
	int rev;

	for (rev = 0 ; rev < _strlen(s); rev++)

	{
		_putchar(s[_strlen(s) - rev - 1]);
	}
	_putchar('\n');
}
