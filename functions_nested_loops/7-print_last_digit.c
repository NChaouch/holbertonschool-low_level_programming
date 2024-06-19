#include <stdio.h>
#include "main.h"
/**
 * 
 * 
 * @n: integer.
 */


int print_last_digit(int n)
{
	int ld;

	ld = _abs(n % 10);
	_putchar(ld + '0');
	return (ld);
}

