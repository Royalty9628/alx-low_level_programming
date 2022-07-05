#include "main.h"

/**
 * main - entry point
 * Printing lowercase alphabet 10 times.
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	char c;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchal('\n');
	}
}
