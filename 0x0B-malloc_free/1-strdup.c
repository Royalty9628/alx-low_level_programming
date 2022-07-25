#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string
 * Return: 0
 */

char *_strdup(char *str)
{
	int d = 0, g = 0;
	char *z;

	if (str == NULL)
	{
		return (NULL);
	}

	for (g = 0; str[g] != '\0';)
		g++;

	z = malloc(g * sizeof(*str) + 1);

	if (z == 0)
	{
		return (NULL);
	}

	else
	{
		for (d = 0; d < g; d++)
			z[d] = str[d];
	}
	return (z);
}
