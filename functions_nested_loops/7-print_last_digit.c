#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - function that prints
 * the last digit of a number.
 * Return: ld.
 * @num: integer.
 */
int print_last_digit(int num)
{
	int ld = num % 10;

	if (ld < 0)
	{
		ld = -ld; /* If ld is negative, this line converts ld to positive */
	}

	_putchar(ld + '0');
	return (ld);
}
