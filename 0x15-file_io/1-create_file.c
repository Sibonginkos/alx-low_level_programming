#include "main.h"
#include <unistd.h>

/**
 * create_file - Creates a file 
 * @filename: Name of file
 * @text_content: Content
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fdo, fdw;
	int len = 0;

	if (filename == NULL)
		return (-1);
	fdo = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fdo < 0)
		return (-1);
	while (text_content && *(text_content + len))
		len++;
	fdw = write(fdo, text_content, len);
	close(fdo);
	if(fdw < 0)
		return (-1);
	return (1);
}
