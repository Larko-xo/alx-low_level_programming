#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read the text file &  print to standard output
 * @filemane: The text file to  be read
 * @letta: The number of letters to be read
 * Return: a: The actual number of bytes read & printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filemane, size_t letta)
{
	char *sort;
	ssize_t xy;
	ssize_t a;
	ssize_t q;

	xy = open(filemane, O_RDONLY);
	if (xy == -1)
		return (0);
	sort = malloc(sizeof(char) * letta);
	q = read(xy, sort, letta);
	a = write(STDOUT_FILENO, sort, q);

	free(sort);
	close(xy);
	return (a);
}
