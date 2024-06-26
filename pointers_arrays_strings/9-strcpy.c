#include "main.h"
/**
 * *_strcpy - function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer
 * pointed to by dest.
 * @dest: pointer to the character.
 * @src: pointer to the character.
 * Return: dest.
 */
char *_strcpy(char *dest, char *src)
{
	int ct = 0;

	while (src[ct] != '\0')
	{
		dest[ct] = src[ct];
		ct++;
	}
	dest[ct] = '\0';
	return (dest);
}
