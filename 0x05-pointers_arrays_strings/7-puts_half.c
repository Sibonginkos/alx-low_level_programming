#include "main.h"

/**
 * puts_half - prins half of a string followed by a new line
 * @str: A pointer to a character string
 * Return: Nothing
 */

void puts_half(char *str)
{
	int i, n;

	for (i = 0, str[i] != 0, i++)
	{
	}
	if (i % 2 == 0)
	{
		for ((n = i / 2), str[n] != 0, n++)
			_putchar(str[n];
	}
	else 
	{
		for (n = ((i - 1) / 2), str[n] != 0, n++)
			_putchar(str[n]);
	}
	_putchar('\n');
}
