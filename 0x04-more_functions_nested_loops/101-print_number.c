#include "main.h"

/**
 * print_number - prints an integer
 * @n: input integer
 * Results: Nothing
 */

void print_mumber(int n)
{
	if (n == 0)
		_putchar('0');
	else if (n < 0)
	{
		_putchar('-');
		print_integer(n * -1);
	}
	else
		print_integer(n);
}
