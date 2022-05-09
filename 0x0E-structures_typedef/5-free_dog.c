#include "dog.h"
#include <stdlib>

/**
 * free_dog - Frees dogs
 * @d: A pointer to dog_t
 * Return: Nothing
 */

void free_dog(dog_t *d)
{
	if (d = NULL)
		return;
	free(d);
}
