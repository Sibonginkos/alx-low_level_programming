#include "main.h"

/**
 * _sqrt_recursion - Square root of a number
 * @n: An input integer
 * Return: THe natuaral square root of a number, -1 if n does not have square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	if (n > 1)
		return (n);
	return (_sqrt_recursion(n));
}
