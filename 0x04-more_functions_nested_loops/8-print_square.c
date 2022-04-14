#include "main.h"

/**
 * print_square - Prints a square
 * @n - input character
 * Return: Nothing
 */

void print_square(int size)
{
	char size;
	size = '#';

	if (size > 0)
		_putchar("#\n");

	else if (size <= 0)
		_putchar('\n');
}
