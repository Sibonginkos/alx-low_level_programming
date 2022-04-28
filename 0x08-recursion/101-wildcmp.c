#include "main.h"

/**
 * wildcmp - Compares two strings
 * @s1: A string pointer
 * @s2: Another string pointer
 * Return: 1 if strings are identical, otherwise 0
 */

int wildcmp(char *s1, char *s2)
{
	int i = 0;

	if (s2[i] == '*')
		return (1);
	if (s1[i] == s2[i])
		return (1);
	else
		return (0);
	return (wildcmp(s1 + 1, s2 + 2));
}
