#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 * @s: parameter
 * Return; void
 */

void print_rev(char *s)
{
	int y = 0;

	while (s[y])
		y++;
	while (y--)
	{
		_putchar(s[y]);
	}

	_putchar('\n');
}
