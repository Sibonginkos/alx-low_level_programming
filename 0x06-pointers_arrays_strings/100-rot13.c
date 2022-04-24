#include "main.h"

/**
 * rot13 - Encodes a string using rot13
 * @s: An input character pointer
 * Return: Encode string
 */

char *rot13(char *s)
{
	int i;	

	while (s[i] != '\0')
	{
		while ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
		{
			if ((s[i] >= 'A' && s[i] <= 'M') || (s[i] >= 'a' && s[i] <= 'm'))
				s[i] = s[i] + 13;
			else
				s[i] = s[i] - 13;
			i++;
		}
		i++;
	}
	return (s);
}
