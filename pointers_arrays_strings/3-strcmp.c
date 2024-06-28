#include "main.h"
/**
 * _strcmp - function that compares two strings.
 * @s1: pointer to the character.
 * @s2: pointer to the character.
 * Return: value neg if s1 is less than s2;
 * value pos if s1 is greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	int ct = 0;

	while (s1[ct] == s2[ct])
	{
		if (s1[ct] == '\0' && s2[ct] == '\0')
			break;
		ct++;
	}

	return (s1[ct] - s2[ct]);
}
