#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the minimum number of coins
 * @argc: int
 * @argv: list
 * Return: Always 0
 */

int main(int argc, char const *argv[])
{
	int coins, X, cents;

	int value[5] = {25, 10, 5, 2, 1};

	coins = 0;
	cents = atoi(argv[argc - 1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	if (cents <= 0)
	{
		printf("0\n");
	}
	else
	{
		for (X = 0; X < 5; X++)
		{
			if (value[X] <= cents)
			{
				coins = coins + (cents / value[X]);
				cents = cents - (cents / value[X]) * value[X];
				if (cents == 0)
				{
					printf("%d\n", coins);
					break;
				}
			}
		}
	}
	return (0);
}
