#include "main.h"
#include <string.h>

/**
 * is_palindrome - Checks if a string is palinrome
 * @s: A character pointer
 * Return: 1 if string is palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	int i = 0;
	int len = strlen(s);

	if (i < len)
	{
		if (s[i + 1] != s[len - i - 1])
		{
			return (0);
		}
		else	
			return (1);
	}
	return (is_palindrome(s - 1));
}
