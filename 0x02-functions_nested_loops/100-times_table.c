#include "main.h"

/**
 * print_times_table - Prints n times table starting from zero
 * @n: An input integer
 * Return: Nothing
 */

void print_times_table(int n)
{
	int i;
	int j;
	int n;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			n = i * j;
			{
				if (j < n)
				{
					_putchar(", ");
				}
				if (n < 15 || n < 0)
				{
					break;
				}
			}
		}
		_putchar('\n');
	}
}
