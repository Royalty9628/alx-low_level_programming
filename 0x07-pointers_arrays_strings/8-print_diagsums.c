#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two diagonals
 * @a: matrix of int type
 * @size: size of the array
 */

void print_diagsums(int *a, int size)
{
	int Y, X1 = 0, X2 = 0;

	for (Y = 0; size > Y; Y++)
	{
		X1 = X1 + a[Y];
		X2 = X2 + a[size - Y - 1];
		a = a + size;
	}
	printf("%d, ", X1);
	printf("%d\n", X2);
}
