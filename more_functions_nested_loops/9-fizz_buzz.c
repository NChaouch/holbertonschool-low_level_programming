#include <stdio.h>
/**
 * print_fizz_buzz - program that prints the numbers from 1 to 100,
 * followed by a new line. But for multiples of three print Fizz instead
 * of the number and for the multiples of five print Buzz.
 * For numbers which are multiples of both three and five print FizzBuzz.
 * Return: void
 */
void print_fizz_buzz(void)
{
	int ct;

	for (ct = 1; ct <= 100; ct++)
	{
		if (ct % 3 == 0 && ct % 5 == 0) /* if ct is a multiple of 3 and 5 */
		{
			printf("FizzBuzz");
		}

		else if (ct % 3 == 0) /* if ct is a multiple of 3 */
		{
			printf("Fizz");
		}

		else if (ct % 5 == 0) /* if ct is a multiple of 5 */
		{
			printf("Buzz");
		}

		else /* if ct is not a multiple of 3 and 5 */
		{
			printf("%d", ct);
		}

		if (ct < 100) /* to avoid spaces after the last number or word */
		{
			printf(" ");
		}
	}
	printf("\n"); /* new line after printing all numbers or words */
}

/**
 * main - program
 * for execute the fizzbuzz
 * Return: 0.
 */
int main(void)
{
	print_fizz_buzz();
	return (0);
}
