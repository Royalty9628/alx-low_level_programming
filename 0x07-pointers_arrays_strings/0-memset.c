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

	for (Y = 0; n > 0; Y++; n--)
	{
		s[Y] = b;
	}

	return (s);
}
