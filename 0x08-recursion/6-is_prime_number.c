#include "main.h"

/**
 * is_prime_number - function to return prime number
 * @n: int parameter
 * Return: 1 if it is prime otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	if (n == 2)
	{
		return (1);
	}
	else
	{
		return (prime_number(n, 2));
	}
}

/**
 * prime_number - compute if the number is prime
 * @n: int parameter
 * @x: int parameter
 * Return: int
 */

int prime_number(int n, int x)
{
	if (x >= n && n > 1)
	{
		return (1);
	}
	else
	if (n % x == 0 || n <= 1)
	{
		return (0);
	}
	else
	{
		return (prime_number(n, x + 1));
	}
}
