#include <stdio.h>
/**
 * main - program that prints the lowercase
 * alphabet in reverse, followed by a new line.
 * Return: 0.
 */
int main(void)
{
	char alph;

	for (alph = 'z'; alph >= 'a'; alph--)
	{
		putchar(alph);
	}

	putchar('\n');

	return (0);
}
