#include <stdio.h>
#include "main.h"

/**
 * main - Description 
 * Description: prints lower cases alphabets followed by a new line
 * Return: Always 0 (succes)
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
