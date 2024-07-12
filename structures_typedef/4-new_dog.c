#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *new_dog - function that creates a new dog.
 * @name: character.
 * @age: float.
 * @owner: character.
 * Return: new_dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}

	new_dog->name = strdup(name);

	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = strdup(owner);

	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	new_dog->age = age;

	if (new_dog->age < 0)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}

	return (new_dog);
}

/**
 * *_strdup - function that returns a pointer to
 * a newly allocated space in memory, which contains
 * a copy of the string given as a parameter.
 * @str: character.
 * Return: NULL
 */
char *_strdup(char *str)
{
	char *pstr;
	unsigned int ct, len;

	if (str == NULL)
	{
		return (NULL);
	}

	for (len = 0; str[len]; len++)

		pstr = malloc(sizeof(char) * (len + 1));

	if (pstr == NULL)
	{
		return (NULL);
	}

	for (ct = 0; ct <= len; ct++)
	{
		pstr[ct] = str[ct];
	}

	pstr[ct] = '\0';

	return (pstr);
}
