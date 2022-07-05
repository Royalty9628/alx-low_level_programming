#include "main.h"

/**
 * main - prints the alphabet, in lowercase, followed by a new line
 * Return: 0 if exited properly, non-zero otherwise
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}