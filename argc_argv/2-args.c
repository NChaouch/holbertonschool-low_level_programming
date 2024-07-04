#include <stdio.h>
/**
 * main - program that prints all arguments it receives.
 * @argc: integer.
 * @argv: character.
 * Return: 0 if success.
 */
int main(int argc, char *argv[])
{
	int ct = 0;

	while (ct < argc)
	{
		printf("%s\n", argv[ct]);
		ct++;
	}

	return (0);
}
