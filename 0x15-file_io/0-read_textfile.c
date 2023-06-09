#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads text file print to STDOUT.
 * @thefilename: The text file being read
 * @letters: The number of letters to be read
 * Return: c - actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *thefilename, size_t letters)
{
	char *buff;
	ssize_t ab;
	ssize_t c;
	ssize_t d;

	ab = open(thefilename, O_RDONLY);
	if (ab == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	d = read(ab, buff, letters);
	c = write(STDOUT_FILENO, buff, d);

	free(buff);
	close(ab);
	return (c);
}
