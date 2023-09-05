#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- This reads the text file print to STDOUT.
 * @filename: This the text file that is being read
 * @letters: This is the number of letters to be read
 * Return: This returns w- actual number of bytes read and printed
 *        and returns 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	ssize_t t;
char *buf;
ssize_t w;

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
