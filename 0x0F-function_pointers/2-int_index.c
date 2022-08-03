#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array to search through
 * @size: size of the array
 * @cmp: function used to compare
 * Return: the index of the first element
 * for which the cmp function doeas not return 0, or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int A, B;

	if (size > 0 && array && cmp)
	{
		for (A = 0; size > A; A++)
		{
			B = cmp(array[A]);
			if (B)
				break;
		}
		if (size > A)
			return (A);
	}
	return (-1);
}
