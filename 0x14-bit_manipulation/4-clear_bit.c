#include "main.h"

/**
 * clear_bit - Gets the bit of a given index
 * @n: An input integer
 * @index: Index
 * Return: The value of the bit at index
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max = 0x01;

	max = ~(max << index);
	if (max == 0x00)
		return (-1);
	*n = *n & max;
	return (1);
}
