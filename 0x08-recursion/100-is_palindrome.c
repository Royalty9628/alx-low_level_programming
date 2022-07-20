#include "main.h"

/**
 * is_palindrome - function that return string palindrome
 * @s: the string pointer
 * Return: length of string
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + is_palindrome(s + 1));
	}
}

/**
 * palindrome - check if a string is a palindrome
 * @s: the string pointer
 * @x: initial point of recursion
 * @y: length of string
 * Return: 1 or 0
 */

int palindrome(char *s, int x, int y)
{
	if (*(s + x) == *(s + y - 1 - x) && x == (y / 2))
	{
		return (1);
	}
	else
	if (*(s + x) != *(s + y - 1 - x))
	{
		return (0);
	}
	else
	{
		return (palindrome(s, x + 1, y));
	}
}

/**
 * is_palin - check if the string is palindrome
 * @s: the string pointer
 * Return: 1 or 0
 */

int is_palin(char *s)
{
	if (palindrome(s, 0, is_palindrome(s)) == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
