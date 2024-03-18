#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/**
 * struct dog - Define a new type struct dog with the following elements
 * @name: the names of dogs in struct dog
 * @age: age of dogs in struct dog
 * @owner: owner of dogs in struct dog
 */

void print_name(char *name, void (*f)(char *));

#endif
