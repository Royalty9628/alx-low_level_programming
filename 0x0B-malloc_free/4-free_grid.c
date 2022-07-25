#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function that frees 2 dimentional grid
 * @grid: grid memories
 * @height: int
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int x = 0;

	for (x = 0; height > x; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
