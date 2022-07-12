#include "main.h"

/**
 * puts_half -  function that prints half of a string
 * @str: parameter
 * Decription: The function should print the second half of the string
 */

void puts_half(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
		a++;

	for (a /= 2; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}

	_putchar('\n');
}
