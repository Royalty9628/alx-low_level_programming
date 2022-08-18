#include "main.h"

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: pointer to the string containing the binary number
 * Return: an unsigned int number
 */

unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int num;

	num = 0;

	if (!b)
		return (0);

	for (j = 0; b[j] != '\0'; j++)
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);
	}

	for (j = 0; b[j] != '\0'; j++)
	{
		num <<= 1;
		if (b[j] == '1')
			num = num + 1;
	}

	return (num);
}
