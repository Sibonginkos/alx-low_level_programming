#include "main.h"

/**
 * rev_string - prints a reverse string
 * @s: An input character string
 * Return: Nothing
 */

void rev_string(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i--;
	}
}
