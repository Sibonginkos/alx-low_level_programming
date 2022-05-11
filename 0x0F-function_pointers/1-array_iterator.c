#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a parameter on each array elem
 * @array: An array pointer to an int
 * @size: Size of the array
 * @action: A function pointer
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL || array == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
