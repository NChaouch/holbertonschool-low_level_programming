#include <stdio.h>
/**
 * main - program that prints all possible
 * combinations of single-digit numbers.
 * Return: 0.
 */
int main(void)
{
	int ct;

	for (ct = 0; ct < 10; ct++)
	{
		putchar(ct + '0'); /* Displays the character corresponding */
				      /* to the decimal digit ct (0 to 9) */

		if (ct < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
