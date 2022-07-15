#include "main.h"
#include <stdio.h>

/**
 * print_buffer - function that prints a buffer
 * @b: is the buffer to be printed
 * @size: is the number of bytes to be printed
 */

void print_buffer(char *b, int size)
{
	int A, B, C;

	A = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (size > A)
	{
		B = size - A < 10 ? size - A : 10;
		printf("%08x: ", A);
		for (C = 0; C < 10; C++)
		{
			if (C < B)
				printf("%02x", *(b + A + C));
			else
				printf("  ");
			if (C % 2)
			{
				printf(" ");
			}
		}
		for (C = 0; C < B; C++)
		{
			int c = *(b + A + C);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		A = A + 10;
	}
}
