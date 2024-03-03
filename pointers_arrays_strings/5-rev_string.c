#include "main.h"
#include "2-strlen.c"
#include <stdlib.h>
/**
 *rev_string -  Write a function that reverses a string
 *@s: character string
 *
 *
*/

void rev_string(char *s)
{
	int rev;
	char *p;

	p = (char *)malloc(sizeof(char) * (_strlen(s) + 1));

	for (rev = 0 ; rev < _strlen(s); rev++)

	{
		p[rev] = *(s + rev);
	}
	for (rev = 0 ; rev < _strlen(s); rev++)
	{
		*(s + rev) = p[_strlen(s) - (rev + 1)];
	}
}
