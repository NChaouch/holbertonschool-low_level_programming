#include <stdio.h>
/**
 * main - program that prints the number
 * of arguments passed into it.
 * @argc: integer.
 * @argv: character.
 * Return: 0 if success program.
 */
int main(int argc, char *argv[])
{
	(void)argv;

	if (argv != NULL && argv[0] != NULL)
	{
		printf("%d\n", argc - 1); /* exclude the first argument */
					/* to calculate the number of additional */
					/*arguments passed to the program */
	}

	else
	{

	}
	return (0);
}
