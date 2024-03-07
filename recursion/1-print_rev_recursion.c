#include "main.h"
/**
 * _print_rev_recursion - Write a function that prints a string in reverse
 * @s: pointer of the character
*/
void _print_rev_recursion(char *s)
{
	if (s[0] != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(s[0]);
	}
	else
	{
		_putchar('\n');
	}

}
