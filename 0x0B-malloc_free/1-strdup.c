#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a new string which is a duplicate
 * @str: A character pointer
 * Return: A pointer to the duplicated string, NULL if insufficient memory
 */

char *_strdup(char *str)
{
	char *s;
	int i, len;

	len = 0;
	s = malloc(sizeof(str) * (len + 1));

	if (s == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	for (i = 0; i < len; i++)
		s[i] = str[i];
	s[i] = '\0';
	return (s);
	free(s);
}
