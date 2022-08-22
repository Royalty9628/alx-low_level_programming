#include "main.h"

/**
 * read_textfile - function that reads a text file and  prints it
 * to the POSIX standard output
 * @filename: the file to read
 * @letters: the number of chars to read
 * Description: reas a file
 * Return: the numbers of letters printed. if it fails, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int lett;
	ssize_t txt, fle;
	char *redd;

	if (!filename)
		return (0);
	lett = open(filename, O_RDONLY);
	if (lett == -1)
		return (0);
	redd = malloc(sizeof(char) * (letters));
	if (!redd)
		return (0);
	txt = read(lett, redd, letters);
	fle = write(STDOUT_FILENO, redd, txt);
	close(lett);
	free(redd);
	return (fle);
}
