#include <stdio.h>
/**
 * main - program that prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 * Return: 0.
 */
int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		putchar(alph);
	}

	for (alph = 'A'; alph <= 'Z'; alph++)
	{
		putchar(alph);
	}

	putchar('\n');

	return (0);
}
