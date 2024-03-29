#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/** 
 * fichier de configuration + appel de librairie 
 * avec les fonctions de rappel
 */

int _putchar(char c);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
void print_chessboard(char (*a)[8]);
char *_strstr(char *haystack, char *needle);
void print_diagsums(int *a, int size);
char *_strpbrk(char *s, char *accept);

#endif
