#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies string pointed to by src to buffer pointed by dest
 * @dest: character pointer
 * @src: character pointer
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	char *p = dest;

	while (*src)
		*dest++ = *src++;
	return (p);
}
