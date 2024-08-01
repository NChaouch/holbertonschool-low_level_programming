#include "main.h"
/**
 * print_binary - function that prints
 * the binary representation of a number.
 * @n: unisgned long int.
 * Return: void.
 */
void print_binary(unsigned long int n)
{
	char digit_bin;

	if (n > 1)
	{
		print_binary(n >> 1); /* divides the number n by 2 */
	}

	digit_bin = ((n & 1) + '0');

	_putchar(digit_bin);
}
