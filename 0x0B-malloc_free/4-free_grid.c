#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free an int 2D array's space in memory
 *
 * @grid: 2D array
 * @h: height of array
 *
 * Return: void
 */

void free_grid(int **grid, int h)
{
	int i;

	for (i = 0; i < h; i++)
		free(grid[i]);

	free(grid);
}
