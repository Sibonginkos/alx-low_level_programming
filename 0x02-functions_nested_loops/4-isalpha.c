#include <stdio.h>
#include "main.h"

/**
 * int _isalpha(int c); - Description
 * @c: an input character
 * Description: Check for alphabetic characters
 * Return: 1 if lowercase or uppercase otherwise 0
 */

int _isalpha(int c)
{
	char lower, upper;
	int isletter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
				isletter = 1;
		}
	}
	return (isletter);
}
