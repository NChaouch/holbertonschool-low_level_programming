#include "main.h"
/**
 * _strchr - Write a function that locates a character in a string
 * @s: pointer to the first occurrence of the character c
 * @c: the character of the string s
 * Return: s
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0' && *s != c)
	{
		s++;
	}
	if (*s == c || c == '\0')
	{
		return (s);
	}
	else
	{
		return (NULL);
	}
}
