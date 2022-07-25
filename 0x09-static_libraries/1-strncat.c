#include "main.h"

/**
 * _strncat - function that concatenetes two strings
 * @src: parameter
 * @dest: parameter to be appended to
 * @n: maximum number of byte to be used
 * Return: Alway 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
	int y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}

	while (y < n && src[y] != '\0')
	{
		dest[x] += src[y];
		x++;
		y++;
	}

	dest += '\0';

	return (dest);
}
