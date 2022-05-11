#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @array: An array pointer
 * @size: Number of elements in the array
 * @cmp: A function pointer
 * Return: -1 if no element matches and if size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);
	return (-1);
}
