#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: unsigned int.
 * @c: character.
 * Return: NULL and p if is succes.
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int ct;

	if (size == 0)
	{
		return (NULL);
	}

	p = malloc(sizeof(char) * size);

	if (p == NULL)
	{
		return (NULL);
	}

	for (ct = 0; ct < size; ct++)
	{
		p[ct] = c;
	}

	return (p);
}
