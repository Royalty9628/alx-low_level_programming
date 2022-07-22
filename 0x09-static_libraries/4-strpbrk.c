#include "main.h"

/**
 * *_strpbrk - function that searches a string for any of a set of bytes
 * @s: string
 * @accept: the set of bytes
 * Return: Pointer to the byte in `s` that matches one of the bytes in `accept`
 * or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int X, Y;
	char *p;

	X = 0;
	while (s[X] != '\0')
	{
		Y = 0;
		while (accept[Y] != '\0')
		{
			if (accept[Y] == s[X])
			{
				p = &s[X];
				return (p);
			}

			Y++;
		}

		X++;
	}

	return (0);
}
