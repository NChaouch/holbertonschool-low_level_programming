#include "main.h"
/**
 * _strspn - function that gets the length
 * of a prefix substring.
 * @s: pointer to the character.
 * @accept: pointer to the character.
 * Return: ct.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int ct = 0;
	int t;

	for (; *s != '\0'; s++)
	{
		for (t = 0; accept[t] != '\0'; t++)
		{
			if (*s == accept[t])
			{
				break;
			}
		}

		if (accept[t] == '\0')
		{
			break;
		}

		ct++;
	}

	return (ct);
}
