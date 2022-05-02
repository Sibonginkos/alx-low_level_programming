#include <stdio.h>
#include "main.h"

/**
 * _islower - Description
 * @c: An input character
 * Description: Checks for lower cases
 * Return: 1 if is lower case otherwise 0
 */

int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}
	return (lower);
}
