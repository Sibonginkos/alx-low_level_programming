#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - A function returning apointer to a 2-D array of integers
 * @width: An integer input
 * @height: An integer input
 * Return: A pointer to 2-D int arrays, NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **s;

	s = (int **)malloc(width * height * sizeof(int *));

	if (width <= 0 || height <= 0)
		return (NULL);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
		for (j = 0; j < height; j++)
			s[i][j] = 0;
	return (s);
}
