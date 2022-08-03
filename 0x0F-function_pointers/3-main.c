#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - perform simple operations
 * @argc: number of argument passed
 * @argv: pointer of the array to arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int a, b, answer;
	int (*function)(int, int);

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}

	if (argv[2][1] != '\0')
	{
		puts("Error");
		exit(99);
	}

	function = get_op_func(*(argv + 2));
	if (!function)
	{
		puts("Error");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	answer = function(a, b);
	printf("%d\n", answer);
	return (0);
}
