 #include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @str: pointer
 * Return: Always 0
 */

char *cap_string(char *str)
{
	int y = 0;

	while (str[y] != '\0')
	{
		if (str[0] <= 'z' && str[0] >= 'a')
		{
			str[0] = str[0] - 32;
		}
		if (str[y] == 32 || str[y] == '.' || str[y] == '\t' ||
			str[y] == '\n' || str[y] == ',' || str[y] == ';' ||
		str[y] == '!' || str[y] == '?' || str[y] == '(' || str[y] == ')' ||
		str[y] == '{' || str[y] == '}')

		{
			if (str[y + 1] <= 'z' && str[y + 1] >= 'a')
			{
				str[y + 1] = str[y + 1] - 32;
			}
		}
	y++;
	}

	return (str);
}
