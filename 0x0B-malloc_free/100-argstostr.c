#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *argstostr - function that concatenates all the arguments
 * @ac: number of arguments
 * @av: double pointer to the arguments
 * Return: pointer to a new sring, or NULL if fails
 */

char *argstostr(int ac, char **av)
{
	int a, b, c, d;
	char *x;

	if (ac <= 0 || av == NULL)
	{
		return (NULL);
	}
	for (a = 0; ac > a; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			d++;
		}
		d++;
	}
	d++;
	x = malloc(d * sizeof(char));
	if (x == NULL)
	{
		return (NULL);
	}
	for (a = 0; ac > a; a++)
	{
		for (b  = 0; av[a][b]; b++)
		{
			x[c] = av[a][b];
			c++;
		}
		x[c] = '\n';
		c++;
	}
	x[c] = '\0';
	return (x);
}
