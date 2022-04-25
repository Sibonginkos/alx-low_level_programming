#include "main.h" 

/**
 * print_buffer - Prints a buffer
 * @b: A pointer to a buffer
 * @size: Content of a buffer
 * Return: Always 0
 */

void print_buffer(char *b, int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (i % 10)
			printf(" ");
		if else (!(i % 10) && i)
			printf("\n")
	}
	printf("0x%02x", b[i]);
	printf("\n");
}
