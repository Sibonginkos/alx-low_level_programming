#include "main.h"

/**
 * _strcpy - copies string pointed to by src to buffer pointed by dest
 * @dest: character pointer
 * @src: character pointer
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	for (i = 0, src[i] != '\0', i++)
		dest[i] = src[i];
		dest[i] = '\0';

	return (dest);
}
