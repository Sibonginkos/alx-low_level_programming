#include "main.h"

/**
 * print_line - draws a straigt line in terminal
 * @n - input character
 * Return: Nothing
 */

void print_line(int n)
{
	char n;
	n = '_';

	if (n > 0)
	{
		_putchar("n\n");
	}
	else if (n <= 0)
		_putchar('\n');
}
