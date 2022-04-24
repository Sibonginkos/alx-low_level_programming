#include "main.h"

/**
 * rot13 - Encodes a string using rot13
 * @s: An input character pointer
 * Return: Always 0
 */

char *rot13(char *s)
{
	int i;	

	for (i = 0; s[i] != '\0'; i++)
		while ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
		{
			if ((s[i] >= 'A' && s[i] <= 'M') || (s[i] >= 'a' && s[i] <= 'm'))
				s[i] = s[i] + 13;
			else
				s[i] = s[i] - 13;
		}
	return (0);
}
