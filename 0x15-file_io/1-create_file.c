#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: terminated string to write on the file
 *
 * Return: 1 on success. -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	/*variable declaration*/
	int fd, nletters, rwr;

	/*check if file name is NULL*/
	if (!filename)
		return (-1);

	/*creat file using open function and set permissions to 0600*/
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	/*calculate the length of the text string*/
	for (nletters = 0; text_content[nletters]; nletters++)
		;

	rwr = write(fd, text_content, nletters);

	/*check if the content can be written to the file*/
	if (rwr == -1)
		return (-1);

	close(fd);

	return (1);
}
