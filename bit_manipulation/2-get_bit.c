#include "main.h"
/**
 * get_bit - function that returns the value
 * of a bit at a given index.
 * @n: unsigned long int.
 * @index: unsigned int.
 * Return: The value of the bit at the index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8) /* Checks the index is greater */
											 /* than to the number of bits in an unsigned long int */
	{
		return (-1);
	}

	return ((n >> index) & 1);
}
