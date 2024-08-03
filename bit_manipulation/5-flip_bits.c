#include "main.h"
/**
 * flip_bits - function that returns the number of bits you
 * would need to flip to get from one number to another.
 * @n: unsigned long int.
 * @m: unsigned nlong int.
 * Return: ct.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    /* XOR between n and m to find the bits that differ */
	unsigned long int result_xror = n ^ m;
	unsigned int ct = 0;

	while (result_xror != 0)
	{
		/* Delete the least significant bit of 1 from result_xror */
		result_xror &= (result_xror - 1);
		ct++; /* Increment the counter for each different bit found */
	}

	return (ct); /* Return the total number of bits to be inverted */
}
