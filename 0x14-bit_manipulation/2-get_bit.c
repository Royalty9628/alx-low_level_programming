#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: the number parameter
 * @index: the position to read the bit
 * Return: the value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int num;

	if (index > 64)
		return (-1);

	num = n >> index;

	return (num & 0x1);
}
