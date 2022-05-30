#include "main.h"
#include <unistd.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout
 * @filename: NAme of file
 * @letters: Number of letters to read and print
 * Return: Number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdo, fdr, fdw;
	char *temp;

	temp = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);
	if (temp == NULL)
		return (0);
	fdo = open(filename, O_RDONLY);
	if (fdo < 0)
	{
		free(temp);
		return (0);
	}
	fdr = read(fdo, temp, letters);
	if (fdr < 0)
	{
		free(temp);
		return (0);
	}
	fdw = write(STDOUT_FILENO, temp, fdr);
	free(temp);
	close(fdo);
	if (fdw < 0)
		return (0);
	return ((ssize_t)fdw);
}
