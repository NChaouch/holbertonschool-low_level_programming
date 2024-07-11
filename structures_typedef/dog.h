#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Define a new type
 * struct dog with the following elements.
 * @name: names of dogs.
 * @age: age of dogs.
 * @owner: owner of dogs.
 */
struct dog
{
	char *name;
	float age;
	char *owner;

};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
