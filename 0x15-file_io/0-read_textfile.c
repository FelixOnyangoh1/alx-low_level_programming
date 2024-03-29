#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- reads txt file and  print output STDOUT.
 * @filename: txt Read
 * @letters: reading n0 letters
 * Return: returns W-  n0 of bytes read & prints.
 *      and 0 when function fail or filename nULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
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

