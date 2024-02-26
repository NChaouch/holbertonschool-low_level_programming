#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 */
void more_numbers(void)
{
	int print, num, num2;

	for (print = 0 ; print <= 9 ; print++)
	{
		for (num = '0' ; num <= '1' ; num++)
		{
			for (num2 = '0' ; num2 <= '9' ; num2++)
			{
			if (!(num == '1' && num2 > '4'))
			{
				if (num >= '1')
				{
				_putchar(num);
				}
				_putchar(num2);
				}
			}
		}
	_putchar('\n');
	}

}
