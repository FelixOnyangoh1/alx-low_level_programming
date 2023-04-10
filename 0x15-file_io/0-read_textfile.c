#include "main.h"
#include <stdlib.h>

/**
 * textfile- Read text file_ print output_ STDOUT.
 * @filename: text _read
 * @letters: reads numbers letter
 * Return: w- actual number of bytes read and prnts
 *        0 when function fails or filename is NULL.
 */
int ssize_t = read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}

