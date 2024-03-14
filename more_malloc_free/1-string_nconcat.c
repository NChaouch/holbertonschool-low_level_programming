#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - Write a function that concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: the max number of bytes of s2 to concatenates to s1.
 * Return: string pointer shall point to a newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2, and null terminated.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string;
	unsigned int len =  n, length;

	if (s1 == NULL)
	{
		 s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (length = 0; s1[length]; length++)
		len++;
	string = malloc(sizeof(char) * (len + 1));
	if (string == NULL)
	{
		return (NULL);
	}

	len = 0;

	for (length = 0; s1[length]; length++)
		string[len++] = s1[length];

	for (length = 0; s2[length] && length < n; length++)
		string[len++] = s2[length];

	string[len] = '\0';

	return (string);
}
