#include "main.h"
/**
 * _strchr - Write a function that locates a character in a string
 * @s: pointer to the first occurrence of the character c
 * @c: the character of the string s
 * Return: s
*/
void _print_rev_recursion(char *s)
{
        if (s[0] != '\0')
        {
                _print_rev_recursion(s + 1);
		_putchar(s[0]);
        }
        else
        {
                _putchar('\n');
        }

}
