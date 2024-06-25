#include "main.h"
#include "2-strlen.c"
#include <string.h>
/**
 * rev_string - function that reverses a string.
 * @s: pointer to the character.
 */
void rev_string(char *s)
{
	int len = _strlen(s);
	int ct;
	int last_ct;
	char tp;

	for (ct = 0; ct < len / 2; ct++)
	{
		last_ct = len - ct - 1; /* character exchange to the last_ct */

		tp = s[ct]; /* Temporarily stores the character at index ct. */
		s[ct] = s[last_ct]; /* Assigns the last_ct character to the ct index. */
		s[last_ct] = tp; /* Places the temporarily stored character */
				    /* at index last_ct. */
	}
}
