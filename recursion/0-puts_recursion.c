#include "main.h"
/**
 * _strchr - Write a function that locates a character in a string
 * @s: pointer to the first occurrence of the character c
 * @c: the character of the string s
 * Return: s
*/
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}

}
