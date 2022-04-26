#include "main.h"

/**
 * _strspn - Gets length of a prefix substring
 * @s: A character pointer
 * @accept: A character pointer
 * Return: The number of bytes in initial segments of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	for (i = 0; s[i] == accept[i]; i++)
		if (s[i] == '\0')
			return (0);
	return (s[i] - accept[i]);
}
