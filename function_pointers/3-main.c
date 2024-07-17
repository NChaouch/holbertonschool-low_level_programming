#include "3-calc.h"
/**
 * main - file should contain your main function only.
 * @argc: integer.
 * @argv: pointer to the character.
 * Return: if success.
 */
int main(int argc, char *argv[])
{
	int num, num2, result;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num = atoi(argv[1]), num2 = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (func == NULL)
	{
		printf("Error\n");
		return (99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	result = func(num, num2);
	printf("%d\n", result);

	return (0);
}
