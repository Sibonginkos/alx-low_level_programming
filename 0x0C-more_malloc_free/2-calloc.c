#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array using malloc
 * @nmeb: Number of elements
 * @size: size of bytes
 * Return: A pointer to array, NULL if maoolc fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *s;

	s = malloc(nmemb * size);
	if (nmemb == 0 || size == 0)
		return (NULL);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		s[i] = 0;
	return (s);
	free(s);
}
