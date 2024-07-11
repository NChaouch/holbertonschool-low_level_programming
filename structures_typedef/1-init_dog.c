#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog - function that initialize a variable of type struct dog.
 * @d: pointer to the struct dog to initialize (struct).
 * @name: pointer of the names of dogs (character).
 * @age: age of the dogs (float).
 * @owner: Pointer owner of the dogs (character).
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
