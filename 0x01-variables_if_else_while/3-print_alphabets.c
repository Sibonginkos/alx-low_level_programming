#include <stdio.h>

/**
 * main - print alphabest [a-z][A-Z]
 * Return: Always 0 (Success)
 */

int main(void) 
{
	int ch;
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	{
		putchar('\n');
	}
	return (0);
}
