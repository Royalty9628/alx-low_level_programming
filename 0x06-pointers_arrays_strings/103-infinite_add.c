#include "main.h"

/**
 * infinite_add  - function that adds two numbers
 * @n1: first parameter
 * @n2: second parameter
 * @r: result
 * @size_r: result length
 * Return: sum
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int A = 0, B = 0, C, D = 0, E, F, G = 0;

	while (n1[A] != '\0')
		A++;
	while (n2[B] != '\0')
		B++;
	if (A > B)
		D = A;
	else
		D = B;
	if (D + 1 > size_r)
		return (0);
	r[D] = '\0';
	for (C = D - 1; C >= 0; C--)
	{
		A--;
		B--;
		if (A >= 0)
			E = n1[A] - '0';
		else
			E = 0;
		if (B >= 0)
			F = n2[B] - '0';
		else
			F = 0;
		r[C] = (E + F + G) % 10 + '0';
		G = (E + F + G) / 10;
	}
	if (G == 1)
	{
		r[D + 1] = '\0';
		if (D + 2 > size_r)
			return (0);
		while (D-- >= 0)
			r[D + 1] = r[D];
		r[0] = G + '0';
	}
	return (r);
}
