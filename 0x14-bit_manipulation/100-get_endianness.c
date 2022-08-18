#include "main.h"

/**
 * get_endianness - function that checks he endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int j = 1;

	if ((j >> 31) == 1)
		return (0);
	else
		return (1);
}
