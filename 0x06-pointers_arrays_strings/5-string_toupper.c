#include "main.h"

/**
 * string_toupper - functon that changes all lowercase to uppercase
 * @str: pointer
 * Return: Always 0
 */

char *string_toupper(char *str)
{
	int X = 0;

	for (str[X] != '\0'; X++;)
	{

		if (str[X] <= 'z' && str[X] >= 'a')
		{
			str[X] = str[X] - 32;
		}
	}

	return (str);
}
