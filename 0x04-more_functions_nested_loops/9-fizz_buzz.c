#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Successful)
 */

int main(void)
{
	int i = 1;

	for (; i < 100; i++) 
	{
		if (i % 3 == 0 && 1 % 5 == 0)
		{
			_putchar("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			_putchar("fizz ");
		}
		else if (i % 5 == 0)
		{
			_putchar("Buzz ");
		}
		else
		{
			_putchar("%d " i);
		}
	}
	printf("Buzz\n");

	return (0);
}
