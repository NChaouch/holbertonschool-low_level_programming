#include "function_pointers.h"
/**
 * print_name - Write a function that prints a name
 * @name: pointer to name
 * @f: pointer to the function that print the name
 * return:
 * If f == NULL - NULL.
 * else - name
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	{
		return;
	}
	else
	{
		f(name); /* print name */
	}
}
