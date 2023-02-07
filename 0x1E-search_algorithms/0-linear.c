#include "search_algos.h"

/**
 * linear_search - function that searches for a value
 * in an array of integers.
 * @array: Type pointer of given array
 * @size: Type size of elements in the array
 * @value: Type value to be searched
 * Return: Value, or -1 if value not present
 */

int linear_search(int *array, size_t size, int value)
{
	size_t y;

	if (array == NULL)
		return (-1);

	for (y = 0; y < size; y++)
	{
		printf("Value checked array[%li] = [%i]\n", y, array[y]);
		if (array[y] == value)
		{
			return (y);
		}
	}
	return (-1);
}
