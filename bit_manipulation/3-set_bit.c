#include "main.h"
/**
 * set_bit - function that sets the value
 * of a bit to 1 at a given index.
 * @n: the pointer to the unsigned long int.
 * @index: unsigned int.
 * Return: 1 if success or -1 is fail.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	/* Sets bit to 1 at specified index */
	*n |= (1UL << index);

	return (1);
}
