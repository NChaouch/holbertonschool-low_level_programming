#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *string_nconcat - function that concatenates two strings.
 * @s1: pointer to the character (first string).
 * @s2: pointer to the character (second string).
 * @n: unsigned int.
 * Return: new_string if success.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_string;
	unsigned int s1_length = 0;
	unsigned int s2_t = 0;
	unsigned int ct;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	/* Calculating the length of s1 */
	while (s1[s1_length])
	{
		s1_length++;
	}
	/* Memory allocation for new_string */
	new_string = malloc(sizeof(char) * (s1_length + n + 1));
	if (new_string == NULL)
	{
		return (NULL);
	}
	/* Copy characters from s1 to new_string */
	for (ct = 0; ct < s1_length; ct++)
	{
		new_string[ct] = s1[ct];
	}
	/* Concatenation of the first n characters of s2 to new_string */
	while (s2[s2_t] && s2_t < n)
	{
		new_string[s1_length + s2_t] = s2[s2_t];
		s2_t++;
	}
	/* Add a null character at the end of the string */
	new_string[s1_length + s2_t] = '\0';

	return (new_string);
}

