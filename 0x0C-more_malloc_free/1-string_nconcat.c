#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: Destination
 * @s2: Source
 * @n: Size of bytes
 * Return: A pointer to the allocated space, NULL if funtion fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, dlen;
	char *s;

	dlen = strlen(s1);
	s = malloc(sizeof(*s1 + *s2));
	if (s == NULL)
		return (NULL);
	if (s1 == NULL || s2 == NULL)
		return ("");
	for (i = 0; i < n && s2[i] != '\0'; i++)
		s1[dlen + i] = s2[i];
	s1[dlen + i] = '\0';
	return (s);
	free(s);
}
