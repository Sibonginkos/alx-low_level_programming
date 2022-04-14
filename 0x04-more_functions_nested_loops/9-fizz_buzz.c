#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Successful)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			_putchar("FizzBuzz\t");
		}
		else if (i % 3 == 0)
		{
			_putchar("fizz\t");
		}
		else if (i % 5 == 0)
		{
			_putchar("Buzz\t");
		}
		else
		{
			_putchar("%d\t, i");
		}
	}
	return (0);
}
