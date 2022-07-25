#include "main.h"

/**
 * _atoi - function that convert a string to an integer
 * @s: parameter
 * Return: A integer
 */

int _atoi(char *s)
{
	int x = 0;
	unsigned int xy = 0;
	int xyz = 1;
	int wxy = 0;

	while (s[x])
	{
		if (s[x] == 45)
		{
			xyz *= -1;
		}

		while (s[x] >= 48 && s[x] <= 57)
		{
			wxy = 1;
			xy = (xy * 10) + (s[x] - '0');
			x++;
		}

		if (wxy == 1)
		{
			break;
		}

		x++;

	}

	xy *= xyz;
	return (xy);
}
