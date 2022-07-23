#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program that adds positive numbers
 * @argc: int
 * @argv: list
 * Return: 1 or 0
 */

int main(int argc, char const *argv[])
{
	int sum, A, B;

	sum = 0;

	for (A = 1; A < argc; A++)
	{
		for (B = 0; argv[A][B] != '\0'; B++)
		{
			if (!isdigit(argv[A][B]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[A]);
	}

	printf("%d\n", sum);
	return (0);
}
