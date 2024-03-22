#include "3-calc.h"
/**
 * get_op_func - the function returns the
 * function that corresponds to the operator.
 * @s: contains the operator to check.
 * Return: return the function that match.
 * Return NULL if the function doesn't match.
*/

int (*get_op_func(char *s))(int, int)
{
	 op_t ops[] = {
		 {"+", op_add},
		 {"-", op_sub},
		 {"*", op_mul},
		 {"/", op_div},
		 {"%", op_mod},
		 {NULL, NULL}
	 };
	 int i;

	 i = 0;

	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
		{
			return (ops[i].f);
		}

		i++;
	}
	return (NULL);
}
