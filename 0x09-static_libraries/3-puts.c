#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line
 * @s: parameter
 * description: a function that prints a string, followed by a new line
 * Return: Void
 */

void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
