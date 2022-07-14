#include "main.h"

/**
 * rot13 - function that encodes a string
 * @str: int type array pointer
 * Return: Always 0
 */

char *rot13(char *str)
{
	int X, Y;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (X = 0; str[X] != '\0'; X++)
	{
		for (Y = 0; Y < 54; Y++)
		{
			if (((str[X] <= 'z' && str[X] >= 'a') || (str[X] <= 'Z' && str[X] >= 'A'))
				&& str[X] == input[Y])
			{
				str[X] = output[Y];

				break;
			}
		}
	}

		return (str);
	}
