#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: first parameter
 * @b: second parameter
 * Description: swap_int swaps the value of two integers *a and *b
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
