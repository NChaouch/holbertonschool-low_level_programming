#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup - function that returns a pointer to
 * a newly allocated space in memory, which contains
 * a copy of the string given as a parameter.
 * @str: character.
 * Return: NULL
 */
char *_strdup(char *str)
{
	char *pstr;
	unsigned int ct, len;

	if (str == NULL)
	{
		return (NULL);
	}

	for (len = 0; str[len]; len++)

	pstr = malloc(sizeof(char) * (len + 1));

	if (pstr == NULL)
	{
		return (NULL);
	}

	for (ct = 0; ct <= len; ct++)
	{
		pstr[ct] = str[ct];
	}

	return (pstr);
}
