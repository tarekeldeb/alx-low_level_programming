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
	char buff[1024];
	int fd;
	ssize_t written;
	
	fd = open (filename, O_RDONLY);
	if (fd == -1 || filename == NULL)
		return (0);
	else
	{
		ssize_t ntext = read (fd, buff, letters);
		if (ntext == -1)
			return (0);
		written = write (fd, buff, letters);
		if (written == -1)
			return (0);
		close (fd);
		return (ntext);

	}
}
