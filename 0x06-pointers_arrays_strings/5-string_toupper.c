#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @s: A character pointer
 * Return: Always 0
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}
	return (0);
}
