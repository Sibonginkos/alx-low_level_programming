#include "main.h" 
#include <stdio.h>
/**
 * print_buffer - Prints a buffer
 * @b: A pointer to a buffer
 * @size: Content of a buffer
 * Return: Nothing
 */

void print_buffer(char *b, int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", b[i]);
	}
	printf("\n");
}
