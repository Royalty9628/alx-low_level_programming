#include "main.h"
#include <stdio.h>
#include  <stdlib.h>

/**
 * **alloc_grid - ruturns a pointer to a 2D array of integers
 * @width: int
 * @height: int
 * Retrun: pointer to 2D array
 */

int **alloc_grid(int width, int height)
{
	int A, B;
	int **grid;

	grid = malloc(sizeof(*grid) * height);

	if (width <= 0 || height <= 0 || grid == 0)
	{
		return (NULL);
	}

	else
	{
		for (A = 0; height > A; A++)
		{
			grid[A] = malloc(sizeof(**grid) * width);
			if (grid[A] == 0)
			{
				while (A--)
				{
					free(grid[A]);
				}
				free(grid);
				return (NULL);
			}

			for (B = 0; width > B; B++)
			{
				grid[A][B] = 0;
			}
		}
	}

	return (grid);
}
