#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stdlib.h>
#include <string.h>

/**
 * struct dog - Define a new type struct dog with the following elements
 * @name: the names of dogs in struct dog
 * @age: age of dogs in struct dog
 * @owner: owner of dogs in struct dog
 */

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif
