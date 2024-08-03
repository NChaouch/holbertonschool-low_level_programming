#include "main.h"
/**
 * clear_bit - function that sets the value
 * of a bit to 0 at a given index.
 * @n: the pointer to the unsigned long int.
 * @index: unsigned int.
 * Return: 1 if success or -1 is fail.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int man_byt;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	/* Create a mask with a 0 at the index bit and 1 everywhere */
	man_byt = ~(1UL << index);

	/* Use the AND operator to set the bit to 0 */
	*n &= man_byt;

	return (1);
}
