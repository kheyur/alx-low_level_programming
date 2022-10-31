#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file
 * @text_content: text to append
 * Return: 1 on success, -1 if fail or filename is NULL
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int n;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (n = 0; text_content[n]; n++)
			;

		rwr = write(fd, text_content, n);

		if (rwr == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
