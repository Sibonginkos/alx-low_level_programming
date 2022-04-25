#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @s: A pointer to a character
 * Return: Pointer string
 */

char *leet(char *s)
{
	char *r = s;
	int i;
	char m[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char n[] = {4, 4, 3, 3, 0, 0, 7, 7, 1, 1};

	while (*s)
	{
		for (i = 0; i < 10; i++)
		{
			if (*s == m[i] || *s == n[i] - 32)
				*s = n[i] + '0';
		}
		s++;
	}
	return (r);
}
