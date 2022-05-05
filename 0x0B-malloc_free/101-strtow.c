#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * strtow - Splits a string into two words
 * @str: A character string pointer
 * Return: A pointer to an array of strings, NULL if it fails
 */

char **strtow(char *str)
{
	int i, j, k, len;
	char **s;

	len = 0;
	j = 0;

	s = (char **)malloc(sizeof(char *) * (len + 1));
	if (str == NULL || str == "")
		return (NULL);
	for (i = 0; str[i] != '\0'' i++)
		if (str != ' ' || str != '\t' &&
				(str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\n'))
			len++;
	for (i = 0; str[i] != '\0' && i < len; i++)
	{
		s[i] = malloc(sizeof(char) * (len + 1));
		if (s[i] == NULL)
			return (NULL);
	}
	for (k = 0; k < i; k++)
		s[j][k] = str[i];
	s[j][k] = '\0';
	return (s);
	free(s);
}
