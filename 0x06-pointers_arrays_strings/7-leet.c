#include "main.h"

/**
 * leet - function that encodes a string
 * @str: char array string type
 * Return: Always 0
 */

char *leet(char *str)
{
	int A = 0, X;
	char s[] = "aAeEoOtTlL";
	char s1[] = "4433007711";

	for (; str[A] != '\0'; A++)
	{
		for (X = 0; X <= 9; X++)
		{
			if (s[X] == str[A])
			{
				str[A] = s1[X];
			}
		}
	}
	return (str);
}
