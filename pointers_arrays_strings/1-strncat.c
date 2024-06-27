#include "main.h"
#include <stdio.h>
/**
 * *_strncat - function that concatenates two strings.
 * @dest: pointer to the character.
 * @src: pointer to the character.
 * @n: integer.
 * Return: concat.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *concat = dest;

	while (*dest)
	{
		dest++;
	}

	while (n-- && *src)
	{
		*dest++ = *src++;
	}

	*dest = '\0';

	return (concat);
}
