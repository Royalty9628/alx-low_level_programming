#include "main.h"

/**
 * set_bit -  function that sets the value of a bit to 1 at a given index
 * @n: pointer to an unsigned long int
 * @index: index oof the bit
 * Return: 1 if it worked, or -1 if an  error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int j;

	if (index > 63)
		return (-1);

	j = 1 << index;
	*n = (*n | j);

	return (1);
}
