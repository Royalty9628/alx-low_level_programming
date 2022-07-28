#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - function that creates an array of integers
 * @min: size of array
 * @max: char to initialize
 * Return: pointer to the array initialize or NULL
 */

int *array_range(int min, int max)
{
	int *X;
	int y;

	if (min > max)
		return (NULL);

	X = malloc((max - min + 1) * sizeof(int));

	if (X == 0)
		return (NULL);

	for (y = 0; min + y <= max; y++)
		X[y] = min + y;

	return (X);
}
