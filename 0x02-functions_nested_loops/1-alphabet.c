#include "main.h"

/**
 * main - prints the alphabet, in lowercase, followed by a new line
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
