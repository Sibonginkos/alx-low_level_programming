#include "main.h"

/**
 * _strpbk - Searches a string for any of a set of bytes
 * @s: A character pointer
 * @accept: A character integer
 * Return: A pointer to the byte in s, else NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == accept[i])
			return (s);
		s++;
	}
	if (s[i] == accept[i])
		return (s);
	return ('\0');
}
