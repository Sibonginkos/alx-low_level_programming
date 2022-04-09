#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Successful)
 */

int main(void)
{
	int ch;
	for(ch = 'a'; ch = 'z'; ch != 'e'; ch != 'q'; ch++)
	{
		putchar(ch);
	}
	{
		putchar('\n');
	}
	return (0);
}
