#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: parameter
 * Description: Function that returns the length of a string
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int b = 0;

	while (*s++)
		b++;
	return (b);
}
