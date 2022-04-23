#include "main.h"

/**
 * _strcmp - Compares two string
 * @s1: A character pointer
 * @s2: A character pointer
 * Return: Always 0
 */

int _strmcp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i]; i++)
		if (s1[i] == '\0')
			return (0);
	return (s1[i] - s2[i]);
}
