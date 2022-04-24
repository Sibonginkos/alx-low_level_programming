#include "main.h"

/**
 * print_number - prints an integer
 * @n: input integer
 * Return: Nothing
 */

void print_number(int n)
{
	int i = 0;

	for ( ; i < n; i++)
	if (n == 0)
		_putchar('0');
	else if (n < 0)
	{
		_putchar('-');
		print_number(n * -1);
	}
	else
		print_number(n);

	if (n / 10 != 0)
	{
		_putchar(n % 10);
		print_number(((n - 1) % 10) / 10);
	}
	else if ((n / 10 == 0) && (n / 10 != 0) && (n > 0))
		_putchar(i % 10);
	else if ((n / 10 == 0) && (n % 10 != 0) && (n <= 0))
		_putchar(-n % 10);
}
