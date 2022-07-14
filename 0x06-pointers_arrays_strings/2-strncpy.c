#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: pointer to the string that is copied
 * @src: pointer to the string that is being copied
 * @n: parameter
 * Return: Always 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}

	for ( ; x < n; x++)
		dest[x] = '\0';

	return (dest);
}
