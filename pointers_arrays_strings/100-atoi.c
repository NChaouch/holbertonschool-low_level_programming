#include "main.h"
/**
 * _atoi - function that convert a string to an integer.
 * @s: pointer to the character.
 * Return: convert * sign.
 */
int _atoi(char *s)
{
	int sign  = 1; /* Initialize the 'sign' variable */
			  /* to determine the sign of the number */

	unsigned int convert = 0; /* Initialize 'convert' to store */
				     /* the converted numerical value */


	/* Loop to scroll through each character in the string */
	do {
		/* If the current character is a minus sign, change the sign to 'sign'. */
		if (*s == '-')
			sign *= -1;

	/* If the current character is a number, */
	/* convert it and add it to 'convert'. */
		else if (*s >= '0' && *s <= '9')
			convert = (convert * 10) + (*s - '0');

		/* If 'convert' already contains a value and the current */
		/* character is not a digit, exit the loop. */
		else if (convert > 0)
			break;

		/* Skip to the next character in the string */
	} while (*s++);

	/* Return the converted value, adjusted by the sign */
	return (convert * sign);
}
