#include <stdio.h>
/**
 * main - program that prints all single digit numbers
 * of base 10 starting from 0, followed by a new line.
 * Return: 0.
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		printf("%d", num);
	}
	putchar('\n');

	return (0);
}
