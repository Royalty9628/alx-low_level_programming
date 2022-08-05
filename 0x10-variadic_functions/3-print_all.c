#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: the kind of format c for char s for string i for int f for
 * float.
 * Return: a string with the arguments
 */

void print_all(const char * const format, ...)
{
	unsigned int j = 0;
	char *str;
	va_list valist;

	va_start(valist, format);
	while (format && format[j] != '\0')
	{
		switch (format[j])
		{
			case 'c':
				printf("%c", va_arg(valist, int));
				break;
			case 'i':
				printf("%i", va_arg(valist, int));
				break;
			case 'f':
				printf("%f", va_arg(valist, double));
				break;
			case 's':
				str = va_arg(valist, char *);
				if (str)
				{
					printf("%s", str);
					break;
				}
				printf("(nil)");
				break;
			default:
				j++;
				continue;
		}
		if (format[j + 1] != '\0')
			printf(", ");
		j++;
	}
	va_end(valist);
	printf("\n");
}
