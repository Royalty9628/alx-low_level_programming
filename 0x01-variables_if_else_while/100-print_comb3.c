#include <stdio.h>

/**
 * main - Prints the numbers from 00 to 99, numbers separated by
 *        a comma followed by a space, in ascending order.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	int i = 0;

	for (n = 0 ; n < 90 ; n++)
	{
		putchar(n / 10 + '0');
		putchar(i + '0');
		if (n < 90)
		{
			putchar(',');
			putchar(32);
		}
		i++;
		if (i > 9)
		{
			i = 0;
		}
	}
	putchar('\n');
	return (0);
}
