#include "main.h"
#include <stdlib.h>

/**
 * read_text_file - Reads text file print to STDOUT.
 * @thefilename: The text file being read
 * @letters: The number of letters to be read
 * Return: w - actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_text_file(const char *thefilename, size_t letters)
{
	char *buff;
	ssize_t ab;
	ssize_t c;
	ssize_t d;

	ab = open(thefilename, O_RDONLY);
	if (ab == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	c = read(ab, buff, letters);
	b = write(STDOUT_FILENO, buff, c);

	free(buff);
	close(ab);
	return (b);
}
