#include "main.h"

/**
 * print_diagonal - Draw diagonal line in terminal
 * @n -Input character
 * Return: Nothing
 */

void print_diagonal(int n)
{
	char n;
	n = "'\'";

	if (n > 0)
		_putchar("\\n");

	else if(n <= 0)
		_putchar('\n');
}
