#include "main.h"
#include <stdio.h>

/**
 * *_strstr - function that locates a substring
 * @haystack: string
 * @needle: pointer
 * Return: pointer
 */

char *_strstr(char *haystack, char *needle)
{
	int A;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		A = 0;

		if (haystack[A] == needle[A])
		{
			do {
				if (needle[A + 1] == '\0')
					return (haystack);

				A++;

			} while (haystack[A] == needle[A]);
		}

		haystack++;
	}

	return ('\0');
}
