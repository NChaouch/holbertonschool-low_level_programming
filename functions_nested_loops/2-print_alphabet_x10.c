#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - function that prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 */
void print_alphabet_x10(void)
{
	char alph;
	int ct;

	for (ct = 0; ct < 10; ct++)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph);
		}
		_putchar('\n');
	}
}
