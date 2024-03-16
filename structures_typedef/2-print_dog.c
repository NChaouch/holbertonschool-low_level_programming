#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Write a function that prints a struct dog
 * @d: Pointer to a struct dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	if (d->name != NULL)
	{
		/* If the name is not NULL, print */
		printf("Name: %s\n", d->name);
	}
	else
	{
		/* If the name is NULL, print "(nil)" */
		printf("Name: (nil)\n");
	}

	/* Print age of the dog with of 6 digits after the comma */
	printf("Age: %.6f\n", d->age);

	if (d->owner != NULL)
	{
		/* If the owner is not NULL, print */
		printf("Owner: %s\n", d->owner);
	}
	else
	{
		/* If the owner is NULL, print "(nil)" */
		printf("Owner: (nil)\n");
	}
}
