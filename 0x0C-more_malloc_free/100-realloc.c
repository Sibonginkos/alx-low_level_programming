#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates memory block using malloc and free
 * @ptr: A pointer to the previous allocated memory
 * @old_size: Size in bytes, of the allocated space for ptr
 * @new_size: Size of the new memory block in bytes
 * Return: A pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s, *p;
	int i;

	p = ptr;
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (NULL);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < old_size; i++)
		s[i] = p[i];
	return (s);
	free(ptr);
	free(s);
}
