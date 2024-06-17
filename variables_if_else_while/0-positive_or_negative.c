#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 *  main - program that prints the size of various
 *  types on the computer it is compiled and run on.
 *  Return: 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
