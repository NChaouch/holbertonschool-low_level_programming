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
	(void)argv; /* Unused parameters */

		printf("%d\n", argc - 1); /* Print the number of arguments */
					/* excluding the program name*/


	return (0); /* Success of termination */
}
