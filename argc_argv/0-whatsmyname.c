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
	(void)argc; /* Unused parameters */
	(void)argv; /* Unused parameters */

	if (argv != NULL && argv[0] != NULL) /* Check if the argv is not NULL */
						/* and the first argument exist */

		printf("%s\n", argv[0]); /* Print the first argument */


	return (0); /* Success of termination */
}
