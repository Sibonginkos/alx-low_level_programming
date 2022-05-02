#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: An input pointer
 * Return: Always 0
 */

int _atoi(char *s)
{
	int i;
	int n;

	n = 0;
	for (i = 0; s[i] >= '0' && s[i] <= '9'; i++)
		n = 10 * n + (s[i] - '0');
	return (n);
}
