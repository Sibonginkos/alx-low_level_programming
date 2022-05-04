#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates array of chars, and intializes it with specific char
 * @size: Array size
 * @c: An input character
 * Return: A pointer to the array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);
	if (size == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
