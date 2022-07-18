#include "main.h"

/**
 * print_chessboard - function that prints the chessboard
 * @a: parameter
 * Return: Always 0
 */

void print_chessboard(char (*a)[8])
{
	int A, B;

	for (A = 0; a[A][7]; A++)
	{
		for (B  = 0; B < 8; B++)
		{
			_putchar(a[A][B]);
		}

		_putchar('\n');
	}
}
