#include "main.h"

/**
 * _strspn - Write a function that gets the length of a prefix substring
 * @s: string to be searched
 * @accept: characters to match
 * Return: length of prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
	char *n;
	unsigned int number = 0;

	while (*s != '\0')
	{
		n = accept;
		while (*n != '\0')
		{
			if (*s == *n)
			{
				break;
			}
			n++;
		}
		if (*n == '\0')
		{
			break;
		}
		number++;
		s++;
	}
	return (number);
}
