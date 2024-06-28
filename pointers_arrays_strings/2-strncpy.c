#include "main.h"
/**
 * *_strncpy - function that copies a string.
 * @dest: pointer to the character.
 * @src: pointer to the character.
 * @n: value integer.
 * Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int ct;

	for (ct = 0; ct < n && src[ct] != '\0'; ct++)
	{
		dest[ct] = src[ct];
	}

	for (; ct < n; ct++)
	{
		dest[ct] = '\0';
	}

	return (dest);
}
