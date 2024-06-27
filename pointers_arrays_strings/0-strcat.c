#include "main.h"
/**
 * *_strcat - function that concatenates two strings.
 * @dest: pointer to the caharacter.
 * @src: pointer to the character.
 * Return: concat.
 */
char *_strcat(char *dest, char *src)
{
	char *concat = dest;

	while (*dest)
	{
		dest++;
	}

	while (*src)
	{
		*dest++ = *src++;
	}

	*dest = '\0';

	return (concat);
}
