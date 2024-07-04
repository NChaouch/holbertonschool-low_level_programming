#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - program that adds positive numbers.
 * @argc: integer.
 * @argv: character.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int num, ct, t;

    /* Check if at least one argument has been passed */
	if (argc < 2)
	{
		printf("0\n"); /* Display 0 if no argument is passed */
		{
			return (0); /* Return 0 to indicate normal output */
		}
	}

    /* Boucle à travers chaque argument passé (à partir de argv[1]) */
	for (ct = 1; ct < argc; ct++)
	{
		char *arg = argv[ct]; /* Pointer to current argument */

		/* Check each character of the current argument */
		for (t = 0; arg[t] != '\0'; t++)
		{
			/* Check if the character is not a digit */
			if (!isdigit(arg[t]))
			{
				printf("Error\n"); /*Display "Error" if a non-numeric */
							/* character is found */
				{
					return (1); /* Return 1 to indicate an error */
				}
			}
		}

		num = atoi(arg); /* Convert argument to integer */
		sum += num; /* Add the converted number to the sum total */
	}

	printf("%d\n", sum); /* Display total sum of numbers */
	{
		return (0); /* Return 0 to indicate normal output */
	}
}
