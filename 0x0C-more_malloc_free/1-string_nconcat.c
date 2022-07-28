#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: size of concaatented s2
 * Return: pointer to the concatenated string or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int A, B, C, D;
	char *conStr;

	C = 0;
	A = 0;
	B = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (*(s1 + A))
		A++;
	while (*(s2 + B))
		B++;

	if (n >= B)
		D = B;
	else
		D = n;

	conStr = malloc((A + D + 1) * sizeof(char));
	if (conStr == NULL)
		return (NULL);

	for (C = 0; C < A; C++)
		*(conStr + C) = *(s1 + C);
	for (C = A; C < (A + D); C++)
		*(conStr + C) = *(s2 + C - A);
	*(conStr + C) = '\0';

	return (conStr);
}
