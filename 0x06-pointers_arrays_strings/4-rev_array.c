#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: an array of intergers
 * @n: the number of elements to swap
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int A = 0;
	int temp;

	n = n - 1;

	while (n >= A)
	{
		temp = a[A];
		a[A++] = a[n];
		a[n--] = temp;
	}
}
