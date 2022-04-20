#include "main.h"

/**
 * swap_int - swaps values of 2 integers
 * @a: Input integer pointer
 * @b: Input integer pointer
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
