#include <stdio.h>
#include "main.h"

/**
 * int print_sign(int n); - Prints sign of a number
 * @n: An input number
 * Return: 1 if positive, 0 if zero or -1 if negative
 */

int print_sign(int n)
{
	int value;

	if (n > 0)
	{
		value = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		value = 0;
		_putchar('0');
	}
	else
	{
		value = -1;
		_putchar ('-');
	}
	return (value);
}
