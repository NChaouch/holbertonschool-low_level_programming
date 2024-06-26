#include "main.h"
#include <stdio.h>
/**
 * print_array - function that prints n elements of an
 * array of integers, followed by a new line.
 * @a: pointer to the integer.
 * @n: integer.
 */
void print_array(int *a, int n)
{
	int ct;

	for (ct = 0; ct < n; ct++)
	{
		printf("%d", a[ct]);
		if (ct != n - 1)
			printf(", ");
	}
	printf("\n");
}
