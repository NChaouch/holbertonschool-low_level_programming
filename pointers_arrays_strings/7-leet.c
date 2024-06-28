#include "main.h"
/**
 * *leet - function that encodes a string into 1337.
 * @str: pointer to the character.
 * Return: str.
 */
char *leet(char *str)
{
	int ct;
	int let_num;
	char let[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	for (ct = 0; str[ct] != '\0'; ct++)
	{
		for (let_num = 0; let_num < 10; let_num++)
		{
			if (str[ct] == let[let_num])
			{
				str[ct] = num[let_num];

				break;
			}
		}
	}
	return (str);
}
