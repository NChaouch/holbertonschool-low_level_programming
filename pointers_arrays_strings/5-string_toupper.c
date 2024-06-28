#include "main.h"
/**
 * *string_toupper - function that changes all lowercase
 * letters of a string to uppercase.
 * @str: pointer to the character.
 * Return: str.
 */
char *string_toupper(char *str)
{
	int ct = 0;

	while (str[ct] != '\0')
	{
		if (str[ct] >= 'a' && str[ct] <= 'z')
		{
			str[ct] = str[ct] - 32;
		}
		ct++;
	}

	return (str);
}
