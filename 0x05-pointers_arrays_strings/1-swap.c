#include "main.h"

/**
 * 1-swap.c - function that swaps the values of two integers
 * @n: first parameter
 * @n: second parameter
 *
 * description: swap the value of *a and *b
 */

void swap_int(int *a, int *b);
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
