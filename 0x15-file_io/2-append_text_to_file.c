#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file
 * @text_content: NULL terminated string at end of file
 *
 * Return: 1 on success. -1 on failure,NULL filename
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, letters, wr;

	/*check if filename is NULL*/
	if (!filename)
		return (-1);

	/*open the file in append mode*/
	fd = open(filename, O_WRONLY | O_APPEND);

	/*check for errors opening file*/
	if (fd == -1)
		return (-1);

	/*if file is not NULL write text_content*/
	if (text_content)
	{
		for (letters = 0; text_content[letters]; letters++)
			;

		wr = write(fd, text_content, letters);

		/*check for errors*/
		if (wr == -1)
			return (-1);
	}

	/*close and return 1 on success*/
	close(fd);

	return (1);
}
