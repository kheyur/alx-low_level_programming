#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: text that needs to be written in
 * Return: 1 on success, -1 if fail or filename is NULL
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int n;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT  O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (n = 0; text_content[n]; n++)
		;

	rwr = write(fd, text_content, n);

	if (rwr == -1)
		return (-1);

	close(fd);

	return (1);
}
