#include "main.h"

/**
 * reverse_array - Reverses the contents of an array of integers
 * @a: An integer pointer
 * @n: An input integer
 * Return: Always 0
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
