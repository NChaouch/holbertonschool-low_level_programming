#include "main.h"
/**
 * _isupper - writes function that checks for uppercase character
 * @c: character
 * Return: 1 if c is uppercase or zero
 *
 */
int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	else
	{
		return (0);
	}

}
