#include <stdio.h>
/**
 * main - program that prints its name,
 * followed by a new line.
 * @argc: integer.
 * @argv: character.
 * Return: 0 if success program.
 */
int main(int argc, char *argv[])
{
	(void)argc;

	if (argv != NULL && argv[0] != NULL)
	{
		printf("%s\n", argv[0]);
	}

	else
	{

	}
	return (0);
}
