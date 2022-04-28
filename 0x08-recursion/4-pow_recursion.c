#include "main.h"

/**
 * _pow_recursion - Result of x raised to the power of y
 * @x: An input integer
 * @y: An input integer
 * Return: The value of x when raised to power y, -1 if y<0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
