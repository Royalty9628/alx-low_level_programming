#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @src: char[] to be appended to dest
 * @dest: char[] to be appended to
 * Return: Always 0
 */

char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}

	while (src[b] != '\0')
	{
		dest[a] += src[b];
		a++;
		b++;
	}

	dest += '\0';

	return (dest);
}
