#include "main.h"
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

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (a = 0; ac > a; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			d++;
		}
	}
	d = d + ac;

	x = malloc(sizeof(char) * d + 1);
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
		if (x[c] == '\0')
		{
			x[c++] = '\n';
		}
	}
	return (x);
}
