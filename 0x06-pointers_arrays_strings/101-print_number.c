#include "main.h"

/**
 * print_number - prints an integer
 * @n: input integer
 * Return: Nothing
 */

void print_number(int n)
{
	int i;

	if (n / 10 != 0)
	{
		_putchar(n % 10);
		printnumber((n - 1 % 10) / 10);
	}
	else if ((n / 10 == 0) && (n / 10 != 0) && (n > 0))
		_putchar(i % 10);
	else if ((n / 10 == 0) && (n % 10 != 0) && (n <= 0)
		_putchar(-n % 10);
}
