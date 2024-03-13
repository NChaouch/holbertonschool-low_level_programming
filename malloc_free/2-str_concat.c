#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Write a function that concatenates two strings
 * @s1 : The first string to be concatenated
 * If it is NULL, it is treated as an empty string
 * @s2: The second string to be concatenated
 * If it is NULL, it is treated as an empty string
 * Return: str_concat
 */

char *str_concat(char *s1, char *s2)
{
	int length_s1 = 0;
	int length_s2 = 0;
	int count;
	char *concat_str;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	while (s1[length_s1] != '\0')
	{
		length_s1++;
	}

	while (s2[length_s2] != '\0')
	{
		length_s2++;
	}

	concat_str = malloc((length_s1 + length_s2 + 1) * sizeof(char));
	if (concat_str == NULL)
	{
		return (NULL);
	}

	for (count = 0; count < length_s1; count++)
	{
		concat_str[count] = s1[count];
	}

	for (count = 0; count < length_s2; count++)
	{
		concat_str[length_s1 + count] = s2[count];
	}

	concat_str[length_s1 + length_s2] = '\0';
	return (concat_str);
}
