#include <stdio.h>
#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the STDOUT
 * @filename: pointer to the filename
 * @letters: no of letters will be read and printed
 *
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char buf[1024];
	ssize_t nread;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	nread = read(fd, buf, letters);
	if (nread == -1)
		return (0);
	if (write(STDOUT_FILENO, buf, nread) != nread)
		return (0);
	return nread;
}
