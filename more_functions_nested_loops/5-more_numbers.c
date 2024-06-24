#include "main.h"
/**
 * more_numbers - function that prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 */
void more_numbers(void)
{
	int ct, num;

	for (ct = 0; ct <= 9; ct++)
	{

	for (num = '0'; num <= '9'; num++)
	{
		_putchar(num);
	}


	for (num = '0'; num <= '4'; num++)
	{
		_putchar('1');
		_putchar(num);
	}

	_putchar('\n');
}
}
