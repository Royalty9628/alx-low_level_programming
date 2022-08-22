#include "main.h"

/**
 * append_text_to_file - function that appends text t the end of a file
 * @filename: name of the file
 * @text_content: added content
 * Return: 1 0n success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fn, len, cxt;

	if (!filename)
		return (-1);
	fn = open(filename, O_WRONLY | O_APPEND);
	if (fn == -1)
		return (-1);
	if (text_content)
	{
		for (len = 0; text_content[len]; len++)
			;
		cxt = write(fn, text_content, len);
		if (cxt == -1)
			return (-1);
	}
	close(fn);
	return (1);
}
