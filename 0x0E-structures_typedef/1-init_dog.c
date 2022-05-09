#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initializes a variable of struct dog
 * @d: A struct dog pointer
 * @name: A pointer to the dogs name
 * @age: Dog's age
 * @owner: A pointer to the dogs owner
 * Return: A pointer structure dog, NULL if it fails
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->owner = owner;
	d->age = age;
}
