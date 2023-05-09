#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @thefilename: A pointer to the name of the file.
 * @txt_cntnt: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *thefilename, char *txt_cntnt)
{
	int p, r, tem = 0;

	if (thefilename == NULL)
		return (-1);

	if (txt_cntnt != NULL)
	{
		for (tem = 0; txt_cntnt[tem];)
			tem++;
	}

	p = open(thefilename, O_WRONLY | O_APPEND);
	r = write(p, txt_cntnt, tem);

	if (p == -1 || r == -1)
		return (-1);

	close(p);

	return (1);
}
