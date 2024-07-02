#include "main.h"
/**
 * *_memcpy - function that copies memory area.
 * @dest: pointer to the character.
 * @src: pointer to the character.
 * @n: bytes from memory area src to print.
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int ct;

	for (ct = 0; ct < n; ct++)
	{
		dest[ct] = src[ct];
	}
	return (dest);
}

