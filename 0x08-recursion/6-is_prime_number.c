#include "main.h"

/**
 * is_prime_number - Determines if a number is a prime or not
 * @n: An integer input
 * Return: i if prime and 0 if not prime
 */

int is_prime_number(int n)
{
	int i = 2;

	if ((n < 2) || (n % i == 0))
		return (0);
	if (n % i != 0)
		return (1);
	return (is_prime_number(n));
}
