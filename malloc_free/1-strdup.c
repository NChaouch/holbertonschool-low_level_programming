#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Write a function that
 * returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str : The string to duplicate
 * Return: The copy
 */

char *_strdup(char *str)
{
	char *copy;
	unsigned int length;
	unsigned int count;

	if (str == NULL)
	{
		return (NULL);
	}

	for (length = 0; str[length]; length++)
		;
	copy = malloc((length + 1) * sizeof(char));

	if (copy == NULL)
	{
		return (NULL);
	}

	for (count = 0; count < length; count++)
	{
		copy[count] = str[count];
	}

	copy[length] = '\0';
	return (copy);
}
