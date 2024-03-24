#include "main.h"
#include <stdio.h>
/**
 * main - Entry point.
 * @argc: Total of number arguments passed to the executable.
 * @argv: Array of strings containing the arguments.
 * Return: always 0.
*/
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]); /* Print for each argument */
	}


	return (0); /* Success of termination */
}
