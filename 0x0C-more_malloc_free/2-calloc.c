#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - function that allocates memory for an array
 * @nmemb: string 1
 * @size: string 2
 * Return: pointer to concatenated string
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int x;
	char *Y;

	if (nmemb == 0 || size == 0)
		return (NULL);

	Y = malloc(nmemb * size);
	if (Y == NULL)
		return (NULL);

	for (x = 0; x < (nmemb * size); x++)
		*(Y + x) = 0;

	return (Y);
}
