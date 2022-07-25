#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: the searched string
 * @accept: character to match
 * Return: int
 */

unsigned int _strspn(char *s, char *accept)
{
	int A;
	unsigned int byte = 0;

	while (*s)
	{
		for (A = 0; accept[A]; A++)
		{
			if (*s == accept[A])
			{
				byte++;

				break;
			}

			else if (accept[A + 1] == '\0')
				return (byte);
		}

		s++;
	}

	return (byte);
}
