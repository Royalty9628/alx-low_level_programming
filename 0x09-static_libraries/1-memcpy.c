#include "main.h"

/**
 * *_memcpy - function that copies memory area
 * @dest: pointer to memory
 * @src: source
 * @n: bytes from memory
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int X;

	for (X = 0; n > X; X++)
	{
		dest[X] = src[X];
	}

	return (dest);
}
