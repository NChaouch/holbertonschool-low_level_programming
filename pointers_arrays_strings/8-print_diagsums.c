#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints the sum of the
 * two diagonals of a square matrix of integers.
 * @a: pointer to the integer.
 * @size: integer.
 */
void print_diagsums(int *a, int size)
{
	int ct;
	int sum = 0;
	int sum2 = 0;

	for (ct = 0; ct < size; ct++)
	{
		sum += a[ct * size + ct];
		sum2 += a[ct * size + (size - 1 - ct)];
	}

	printf("%d, %d\n", sum, sum2);
}
