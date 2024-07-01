#include "main.h"
#include <stddef.h>
/**
 * *_strchr - function that locates a character in a string.
 * @s: pointer to the character.
 * @c: character.
 * Return: s if c is found in s;
 * NULL if c is not found in s.
 *
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
