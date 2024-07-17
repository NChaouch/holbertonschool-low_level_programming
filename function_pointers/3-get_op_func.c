#include "3-calc.h"
/**
 * *get_op_func - file should contain the function
 * that selects the correct function to perform the
 * operation asked by the user. You’re not allowed
 * to declare any other function.
 * @s: pointer to the character.
 * Return: returns a function pointer to a
 * function taking two integers.
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
		if (*(ops[i].op) == s[0] && s[1] == '\0')
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}

