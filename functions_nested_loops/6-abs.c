#include "main.h"
/**
 * _abs - writes the absolute value of an integer
 * @n: integer
 * Return: n if n is positive or zero , -n if negative
 *
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}

	else if (n == 0)
	{
		return (n);
	}

	else
	{
		return (-n);
	}
}
