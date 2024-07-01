#include "main.h"
/**
 * *_strstr - function that locates a substring.
 * function finds the first occurrence of the substring
 * needle in the string haystack.
 * @haystack: pointer to the character.
 * @needle: pointer to the character.
 * Return: haystack or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0' && *haystack != *needle)
	{
		haystack++;
	}

	if (*needle == '\0' || *haystack == *needle)
	{
		return (haystack);
	}

	else
	{
		return ('\0');
	}
}
