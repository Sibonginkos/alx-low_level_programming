#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @s: A pointer to a character
 * Return: Always 0
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] !=0; i++)
	{
		if (i == 0)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 32;
		}
		else if (s[i - 1] == ' ')
		{	
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 32;
		}
		else if (s[i - 1] == '\t')
		{	
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 32;
		}
		else if (s[i - 1] == '\n')
		{	
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 32;
		}
		else if (s[i - 1] == '.')
		{	
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 32;
		}

	}
	return (s);
}
