#include "main.h"
#include <stdio.h>
/**
 * is_prime_number -  function that returns 1 if the
 * input integer is a prime number, otherwise return 0.
 * @n: integer.
 * Return:  1 if the input integer is a prime number,
 * otherwise return 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime_helper(n, 2)); /* Call the auxiliary function */
					/* with n and 2 as arguments */
}

/**
 * is_prime_helper - for do the function is_prime_number.
 * @n: integer.
 * @divisor: integer.
 * Return: 1 if the divisor is not found
 * of the sqaure root of.
 * 0 if is a divisor other than 1 and n.
 */
int is_prime_helper(int n, int divisor)
{
	if (divisor * divisor > n)
	{
		return (1); /*  No divisor found up to the */
			/* square root of n (n is prime) */
	}

	if (n % divisor == 0)
	{
		return (0); /* Find a divisor other than */
				/* 1 and n (n is not prime) */
	}

	return (is_prime_helper(n, divisor + 1)); /* Recursive call with */
						/* divisor incremented by 1 */
}
