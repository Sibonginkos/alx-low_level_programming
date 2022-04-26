#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: A character pointer
 * @b: A character input
 * @n: Size of bytes
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}
