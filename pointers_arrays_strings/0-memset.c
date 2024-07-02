#include "main.h"
/**
 * *_memset -  function that fills memory with a constant byte.
 * @s: pointer to the character.
 * @b: character.
 * @n: size memory print.
 * Return: s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int ct;

	for (ct = 0; ct < n; ct++)
	{
		s[ct] = b;
	}
	return (s);
}
