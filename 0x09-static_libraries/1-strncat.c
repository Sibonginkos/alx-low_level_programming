#include "main.h"
#include <string.h>

/**
 * _strncat - Concatenates two strings using at most n bytes from src
 * @dest: Destination
 * @src: Source
 * @n: An input integer
 * Return: Always 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int dlen = strlen(dest);
	int i;
	char *p = dest;

	for (i = 0; i < n && src[i] != 0; i++)
		dest[dlen + i] = src[i];
	dest[dlen + i] = '\0';

	return (p);
}
