#include "main.h"

/**
 * get_bits - Gets the bit of a given index
 * @h: An input integer
 * @index: Index
 * Return: The value of the bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int max = 0x01;

	max = max << index;
	if (max == 0)
		return (-1);
	if ((n & max))
		return (1);
	else
		return (0);
}
