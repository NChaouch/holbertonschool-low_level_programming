#include "main.h"
/**
 * *_strpbrk - function that searches a
 * string for any of a set of bytes.
 * @s: pointer to the character.
 * @accept: pointer to the character.
 * Return: s + ct.
 */
char *_strpbrk(char *s, char *accept)
{
	int ct, t;

	for (ct = 0; s[ct] != '\0'; ct++)
	{
		for (t = 0; accept[t] != '\0'; t++)
		{
			if (s[ct] == accept[t])
			{
				return (s + ct);
			}
		}
	}
	return ('\0');
}
