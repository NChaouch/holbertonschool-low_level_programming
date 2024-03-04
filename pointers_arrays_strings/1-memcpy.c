#include "main.h"
/**
 * _memcpy - Write a function that copies memory area
 * @src: pointer to the source
 * @dest: destination of pointer
 * @n: size of memory to print,
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
