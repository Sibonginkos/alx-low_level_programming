#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Check description
 * Description: Prints lower cases alphabets followed by a new line ten times
 * Return: Always 0 (succes)
 */

void print_alphabet_x10(void)
{
	char i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
