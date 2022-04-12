#include <stdio.h>
#include "main.h"

/**
 * main - Print alphabet
 * Return: Always 0 (succes)
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
