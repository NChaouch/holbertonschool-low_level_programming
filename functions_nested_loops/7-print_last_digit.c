#include "main.h"
#include "6-abs.c"
/**
 * print_last_digit - writes the last digit of a number
 * @n: integer
 * Return: last digit of n
 *
 */
int print_last_digit(int n)
{
	int ld;

	ld = _abs(n % 10);
	_putchar(ld + '0');
	return (ld);
}
