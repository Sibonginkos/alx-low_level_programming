#include <stdio.h>

/**
 * main - print lower cases a-z
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch;
	for (ch= 'a' ; ch<= 'z' ; ch++)
	{
		putchar(ch);
	}
	{
		putchar('\n');
	}
	return (0);
}
