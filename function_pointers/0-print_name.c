#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - function that prints a name.
 * @name: pointer to the character.
 * @f: pointer to the void.
 * @*: pointer to the character.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
