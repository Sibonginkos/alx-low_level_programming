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
		if (i *= 3)
			_putchar("fizz ");

		else if (i *= 5)
			_putchar("Buzz ");

		else
			_putchar("i ");
	}
	return (0);
}
