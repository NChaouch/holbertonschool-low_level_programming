#include <stdio.h>
#include "main.h"
/**
 * _isalpha - function that checks for alphabetic character.
 * Return: 1 if c is a letter, lowercase or uppercase.
 * And 0 if is otherwise.
 * @c: integer.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);

	return (0);
}
