#include "main.h"

/**
 * create_file - function that creats a file
 * @filename: the name of the file to create
 * @text_content: content of the file created
 * Return: 1 0r -1
 */

int create_file(const char *filename, char *text_content)
{
	int fn;
	int len;
	int cxt;

	if (filename == NULL)
		return (-1);
	fn = open(filename, O_CREAT | O_RDWR | O_TRUNC, 00600);
	if (fn == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
			;
		cxt = write(fn, text_content, len);
	}
	if (cxt == -1)
		return (-1);
	close(fn);
	return (1);
}
