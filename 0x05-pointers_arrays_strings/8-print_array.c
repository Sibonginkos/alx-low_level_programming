#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array
 * @a: a pointer to an input integer
 * @n: an input integer
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	putchar('\n');
}
