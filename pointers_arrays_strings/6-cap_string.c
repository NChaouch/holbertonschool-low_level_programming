#include "main.h"
/**
 * *cap_string - function that capitalizes all words of a string.
 * @str: pointer to the character.
 * Return: str.
 */
char *cap_string(char *str)
{
	int ct = 0;
	int s = 0;
	char sep[] = " \r\n,;!?\"(){}";

	if (str[ct] >= 'a' && str[ct] <= 'z')
	{
		str[ct] = str[ct] - 32;
	}

	while (sep[s] != '\0')
	{
		if (str[ct - 1] == sep[s] && str[ct] >= 'a' && str[ct] <= 'z')
		{
			str[ct] = str[ct] - 32;
			break;
		}
		s++;
	}
	ct++;
	{
		return (str);
	}
}
