#include "main.h"
/**
 * *cap_string - function that capitalizes all words of a string.
 * @str: pointer to the character.
 * Return: str.
 */
char *cap_string(char *str)
{
	int ct = 0;
	char sep[] = " \t\n,;.!?\"(){}";
	int s;
	
	if (str[ct] >= 'a' && str[ct] <= 'z')
	{
		str[ct] = str[ct] - 32;
	}
	
	while (str[ct] != '\0')
	{
		for (s = 0; sep[s] != '\0'; s++)
		{
			if (str[ct] == sep[s] && str[ct + 1] >= 'a' && str[ct + 1] <= 'z')
			{
				str[ct + 1] = str[ct + 1] - 32;
				break;
			}
		}
		ct++;
	}
	return (str);
}

