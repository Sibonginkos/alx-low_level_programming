#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters
 * @n: An input integer
 * Return: Sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum;

	va_start (ap, n);

	sum = 0;
	for (i = 0; i < n; i++)
	sum += va_arg (ap, int);
	if (n == 0)
		return (0);
	va_end (ap);
	return (sum);
}
