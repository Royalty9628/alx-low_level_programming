#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: parameter
 * @s2: parameter
 * Return: Always 0
 */

int _strcmp(char *s1, char *s2)
{
	int y = 0;

	while ((s1[y] == s2[y]) && (s1[y] != '\0'))
	{
		y++;
	}

	return (s1[y] - s2[y]);
}
