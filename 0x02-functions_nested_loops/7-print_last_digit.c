#include "main.h"
/**
 * main - print_last_digit
 * Return: The last digit.
 */
int main (void)
{
	if (n < 0)
		n = n * -1;
	_putchar((n % 10) + '0');
	return (n % 10);
}
