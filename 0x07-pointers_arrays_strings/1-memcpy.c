#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: A character pointer, destination
 * @src: A source character pointer
 * @n: An unsigned integer input
 * Return: A pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
