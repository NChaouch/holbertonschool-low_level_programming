#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main -  program will assign a random number to the
 * variable n each time it is executed.
 * Complete the source code in order to print the
 * last digit of the number stored in the variable n.
 * Return: 0.
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is\n", n);
	if (n % 10 > 5)
	{
		printf("%d and is greater than 5\n", n % 10);
	}
	else if (n % 10 == 0)
	{
		printf("%d and is \n", n % 10);
	}
	else
	{
	printf("%d and is less than 6 and not 0\n", n % 10);
	}
	return (0);
}
