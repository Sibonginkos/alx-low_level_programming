#include "main.h"

/**
 * rot13 - Encodes a string using rot13
 * @s: An input character pointer
 * Return: Encoded pointer  
 */

char *rot13(char *s)
{
	int i = 0;	

	for ( ; s[i] != '\0'; i++)
	{
		if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
				s[i] = s[i] + 13;
			else
				s[i] = s[i] - 13;	
	}
	return (s);
}
