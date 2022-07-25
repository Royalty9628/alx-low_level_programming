#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - function that creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array
 * @c: char to be initialize
 * Return: returns pointer to the array, or NUll if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *x = malloc(size);

	if (size == 0 || x == 0)
	{
		return (0);
	}

	while (size--)
	{
		x[size] = c;
	}

	return (x);
}
