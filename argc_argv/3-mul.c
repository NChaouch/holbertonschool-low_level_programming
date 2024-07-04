#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two numbers.
 * @argc: integer.
 * @argv: character.
 * Return: if success.
 */
int main(int argc, char *argv[])
{
	int num, num2, result;

    /* Check if the number of arguments is less than 3 */
	if (argc < 3)
	{
		printf("Error\n");
		{
			return (1); /* Retourne 1 pour indiquer une erreur */
		}
	}

    /* Convert arguments to integers */
	num = atoi(argv[1]);
	num2 = atoi(argv[2]);

    /* Calculate the product of two numbers */
	result = num * num2;

	printf("%d\n", result);
	{
		return (0);
	}
}
