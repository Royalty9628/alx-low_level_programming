#include "main.h"

/**
 * print_number - function that prints an integer
 * @n: parameter
 * Return: Always 0
 */

void print_number(int n)
{
	unsigned int B;

	B = n;

	if (n < 0)
	{
		_putchar('-');
		B = -n;
	}

	if (B / 10 != 0)
	{
		print_number(B / 10);
	}

	_putchar((B % 10) + '0');
}
