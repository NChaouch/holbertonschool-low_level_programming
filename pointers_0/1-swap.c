#include <stdio.h>
/**
 * swap_int - swap int
 *
 * @a: integer
 * @b: integer
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
