#include "main.h"

/**
 * create_file - Creates a file.
 * @thefilename: A pointer to the name of the file to create.
 * @txt_cntnt: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *thefilename, char *txt_cntnt)
{
	int ab, r, tem = 0;

	if (thefilename == NULL)
		return (-1);

	if (txt_cntnt != NULL)
	{
		for (tem = 0; txt_cntnt[tem];)
			tem++;
	}

	ab = open(thefilename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	r = write(ab, txt_cntnt, tem);

	if (ab == -1 || r == -1)
		return (-1);

	close(ab);

	return (1);
}
