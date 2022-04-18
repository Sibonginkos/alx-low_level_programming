#include "main.h"
#include <stdio.h>

/**
 * _isupper - Checks for uppercase characters
 * @c: input character
 * Return: 1 if uppercase otherwise 0
 */

int _isupper(int c)
{
	char uppercase = 'A';
	int upper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			upper = 1;
			break;
		}
	}

	return (upper);
}
