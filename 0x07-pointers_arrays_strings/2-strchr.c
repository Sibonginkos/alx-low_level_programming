#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: A character pointer
 * @c: An input integer
 * Return: A pointer to the first occurence of c, else NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; s++)
	{
		if (s[i] == c)
			return (s);
	}
	if (s[i] == c)
		return (s);
	return ('\0');
}
