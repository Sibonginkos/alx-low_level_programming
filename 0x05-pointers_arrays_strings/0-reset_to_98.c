#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - resets integer value to 98
 * @*: A pointer to integer n
 * @n: An input interger
 * Return: Nothing
 */

void reset_to_98(int *n)
{
	int n;
	int *p;

	n = 402;
	p = &n;
	_putchar("n=%d\n", n);

	*p = 98;
	_putchar("n=%d\n", n);
}
