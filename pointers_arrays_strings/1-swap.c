#include "main.h"
/**
 * swap_int - function that swaps the
 * values of two integers.
 * @a: pointer to the integer.
 * @b: pointer to the integer.
 */
void swap_int(int *a, int *b)
{
	int tp;

	tp = *a;
	*a = *b;
	*b = tp;
}
