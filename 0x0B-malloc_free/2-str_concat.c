#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings
 * @s1: A character pointer, destination
 * @s2: Another character pointer, source
 * Return: NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, t1, t2, t3;

	t1 = strlen(s1);
	t2 = strlen(s2);
	t3 = t1 + t2 + 1;
	s = malloc(t3);

	if (s != NULL)
	{
		for (i = 0; i < t1; i++)
			s[i] = s1[i];
		for (i = 0; i < t2; i++)
			s[i + t1] = s2[i];
		s[t3 - 1] = '\0';
		return (s);
	}
	else
		return (NULL);
	free(s);
}
