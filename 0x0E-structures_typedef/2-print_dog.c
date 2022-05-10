#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints elements of struct dog
 * @d: A pointer to struct dog
 * Return: Nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	else
		printf("Name: %s\n", d->name);
	if (d->owner == NULL)
		d->owner = "(nil)";
	else
		printf("Owner: %s\n", d->owner);
	printf("Age: %f\n", d->age);
}

