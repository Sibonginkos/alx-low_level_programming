#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_number - Prints number
 * @separator: String to be printed between numbers
 * @n: Number of integers passed to function
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d, ", va_arg(ap, int));
		if (separator == NULL)
			continue;
	}
	printf("\n");
	va_end(ap);	
}
