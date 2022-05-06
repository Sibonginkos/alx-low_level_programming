#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 * @min: Minimum value of integers
 * @max: Maximum value of integers
 * Return: A pointer to the newly created array, NUll if malloc fails
 */

int *array_range(int min, int max)
{
	int i, diff;
	int *s;

	diff = max - min;
	s = malloc(sizeof(int) * (diff + 1));
	if (s == NULL)
		return (NULL);
	if (min > max)
		return (NULL);
	for (i = 0; i <= diff; i++)
	{
		s[i] = min;
		min++;
	}
	return (s);
}
