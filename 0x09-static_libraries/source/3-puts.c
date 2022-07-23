#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line
 * @str: parameter
 * description: a function that prints a string, followed by a new line
 * Return: Void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
