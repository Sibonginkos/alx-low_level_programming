#include "main.h"

/**
 * factorial - Returns a factorial of a given number
 * @n: An input integer
 * Return: Factrorial of a given number, -1 if n<0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
