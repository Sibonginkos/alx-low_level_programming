#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: Destination
 * @src: Source
 * Return: Always 0
 */

char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*dest != '\0')
		dest++;
	while ((*dest = *src) != '\0')
		dest++, src++;
	return (p);
}
