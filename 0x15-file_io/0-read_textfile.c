#include "main.h"
/**
 * read_textfile - reads text file and prints to POSIX standard output
 * @filename: name of file
 * @letters: number of letters to read and print out
 * Return: actual number of letters it can read and print,
 * 0 if filename null or write fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(fd, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(fd);

	free(buf);

	return (nwr);
}
