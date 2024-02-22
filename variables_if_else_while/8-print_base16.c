#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Print all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int num;
	char alphabet;

	for (num = 0; num <= 9; num++)
	{
		putchar('0' + num);
	}
	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
