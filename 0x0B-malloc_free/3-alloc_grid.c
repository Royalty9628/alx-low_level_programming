#include "main.h"
#include <stdio.h>
#include  <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: int
 * @height: int
 * Retrun: 2D array
 */

int **alloc_grid(int width, int height)
{
	int A, B;
	int **X;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	X = (int **) malloc(height * sizeof(int *));
	if (X == NULL)
	{
		free(X);
		return (NULL);
	}

	for (A = 0; height > A; A++)
	{
		*(X + A) = (int *) malloc(width * sizeof(int));
		if (*(X + A) == NULL)
		{
			for (B = 0; B < A; B++)
				free(*(X + B));
			free(X);
		}
	}

	for (A = 0; height > A; A++)
	{
		for (B = 0; width > B; B++)
		{
			*(*(X + A) + B) = 0;
		}
	}

	return (X);
}
