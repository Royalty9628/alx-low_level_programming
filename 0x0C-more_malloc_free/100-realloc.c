#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_realloc - function that reallocates a memory block
 * @ptr: pointer to the old array
 * @old_size: the ize of ptr
 * @new_size: the size of array
 * Return: pointer to the new array
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int m;
	char *realloc, *newptr;

	newptr = ptr;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	realloc = malloc(new_size);
	if (realloc == NULL)
		return (NULL);

	for (m = 0; old_size > m; m++)
		*(realloc + m) = *(newptr + m);

	free(ptr);
	return (realloc);
}
