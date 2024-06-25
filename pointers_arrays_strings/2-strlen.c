#include "main.h"
/**
 * _strlen - function that returns
 * the length of a string.
 * @s: pointer to the character.
 * Return: ctlength.
 */
int _strlen(char *s)
{
	int ctlength = 0;

	while (*s)
	{
		ctlength++;
		s++;
	}
	return (ctlength);
}
