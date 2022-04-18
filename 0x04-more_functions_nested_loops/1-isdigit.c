#include "main.h"

/**
 * _isdigit - Checks for a digit
 * @c: input digit
 * Return: 1 if digit, otherwise 0
 */

int _isdigit(int c)
{
	int j;
	int digit = 0;

	for (j = 0; j <= 9; j++)
	{
		if (j == c)
			digit = 1;
	}
	return (digit);
}
