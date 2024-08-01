#include "main.h"
/**
 * binary_to_uint - function that converts a
 * binary number to an unsigned int.
 * @b: pointer contain string.
 * Return: num (the converted number).
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	int t;

	if (b == NULL)
	{
		return (0);
	}

	for (t = 0; b[t] != '\0'; t++)
	{
		if (b[t] != '0' && b[t] != '1')
		{
			return (0);
		}
		num = num * 2 + (b[t] - '0');
	}
	return (num);
}
