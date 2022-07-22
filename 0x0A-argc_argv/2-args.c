#include <stdio.h>

/**
 * main - program that prints all arguments it receives
 * @argc: int
 * @argv: list
 * Return: Always 0
 */

int main(int argc, char const *argv[])
{
	int X = 0;

	while (argc--)
	{
		printf("%s\n", argv[X]);
		X++;
	}

	return (0);
}
