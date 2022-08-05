#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers
 * @separator: separators to print between numbers
 * @n: number of numbers to print
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	int num;
	va_list valist;

	va_start(valist, n);

	for (x = 0, x < n; x++;)
	{
		num = va_arg(valist, int);
		printf("%d", num);
		if (x < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
