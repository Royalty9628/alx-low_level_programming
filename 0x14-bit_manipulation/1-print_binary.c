#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: the input number
 * Return: binary number
 */

void print_binary(unsigned long int n)
{
	int j, k = 0;
	unsigned long int tmp, num = 0;

	if (n == 0)
		_putchar('0');

	tmp = n;

	for (k = 0; tmp != 0; k++)
		tmp = tmp >> 1;

	for (j = k - 1; j >= 0; j--)
	{
		num = 1 << j;
		if ((n & num) != 0)
			_putchar('1');
		else
			_putchar('0');
	}
}
