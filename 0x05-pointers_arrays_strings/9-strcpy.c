#include "main.h"

/**
 * *_strcpy -  function that copies the string pointed to by src
 * @dest: parameter
 * @src: parameter
 * description:  a function that copies the string pointed to by src
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int y = -1;

	do {
		y++;
		dest[y] = src[y];
	}

	while (src[y] != '\0');

	return (dest);
}
