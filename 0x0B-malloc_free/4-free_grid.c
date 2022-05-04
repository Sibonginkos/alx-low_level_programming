#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees 2-D grid
 * @grid: A pointer to an integer pointer
 * @height: An input integer
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;
	for (i = 0; i < height; i++)
		free((int *)grid);
	free(grid);
}
