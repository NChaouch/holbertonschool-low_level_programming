#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *str_concat -  function that concatenates two strings.
 * @s1: character.
 * @s2: character.
 * Return: concat.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int len = 0, len2 = 0, ct, ct2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[len])
	{
		len++;
	}
	while (s2[len2])
	{
		len2++;
	}

	concat = malloc(sizeof(char) * (len + len2 + 1));

	if (concat == NULL)
	{
		return (NULL);
	}

	for (ct = 0; ct < len; ct++)
	{
		concat[ct] = s1[ct];
	}

	for (ct2 = 0; ct2 < len2; ct2++, ct++)
	{
		concat[ct] = s2[ct2];
	}
	concat[ct] = '\0';

	return (concat);
}
