#include <stdio.h>

/**
 * main - possible combinatin of single digit numbers
 * Return: Always 0 (Success)
 */

int mai(void)
{
	int i;
	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	if (i != 9)
	{
		putchar(',');
	}
	{
		putchar(' ');
	}
	{
		putchar('\n');
	}
	return (0);
}
