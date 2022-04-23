#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: Destination pointer to a character
 * @@src: Pointer to a character, source
 * @n: An input integer
 * Return: Always 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
