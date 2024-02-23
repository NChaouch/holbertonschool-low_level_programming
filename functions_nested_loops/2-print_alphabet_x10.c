#include "main.h"

/**
 * print_alphabet_x10 - print alphabet x10
 *
 * Return: 0
 **/
void print_alphabet_x10(void)
{
	int num;
	char alphabet;

	for (num = 0; num <= 9; num++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
	_putchar('\n');
	}
}
