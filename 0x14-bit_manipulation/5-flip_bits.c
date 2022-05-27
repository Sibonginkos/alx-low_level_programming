#include "main.h"

/**
 * flip_bits - Flips bits
 * @n: An input int
 * @m: An input int
 * Return: The number of bits you need to flip to get from one number to anothe
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = (n ^ m);
	unsigned long int max = 0x01;
	unsigned int flip = 0;

	while (max <= xor)
	{
		if (max & xor)
			flip++;
		max = max << 1;
	}
	return (flip);
}
