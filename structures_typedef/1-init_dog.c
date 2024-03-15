#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Write a function that initialize a variable of type struct dog
 * @d: pointer to the struct dog to initialize
 * @name: pointer the names of dogs in struct dog
 * @age: age of dogs in struct dog
 * @owner: Pointer owner of dogs in struct dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		/* Assign the values for name, age and owner */
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
