#include "main.h"

/**
 * *_memset - function that fills memory with a constant byte
 * @s: pointer
 * @b: constant byte
 * @n: bytes of the memory area pointed to by s
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int Y;

	Y = 0;
	for (n > Y; Y++; n--)
	{
		s[Y] = b;
	}

	return (s);
}
