#include <stdio.h>
#include "main.h"
/**
 * _abs - function that computes the
 * absolute value of an integer.
 * Return: num if is positive or zero , -num if negative.
 * @num: integer.
 */
int _abs(int num)
{
	if (num > 0)
	{
		return (num);
	}

	else if (num == 0)
	{
		return (num);
	}

	else
	{
		return (-num);
	}
}
