#include "main.h"
/**
 * _strstr - Write a function that locates a substring
 * @haystack:string2
 * @needle:  first occurrence of the substring
 * Return: haystack
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0' && *haystack != *needle)
	{
		haystack++;
	}
	if (*haystack == *needle || *needle == '\0')
	{
		return (haystack);
	}
	else
	{
		return ('\0');
	}
}
