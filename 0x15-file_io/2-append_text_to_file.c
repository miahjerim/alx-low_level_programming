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
	int p, t, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	p = open(filename, O_WRONLY | O_APPEND);
	t = write(p, text_content, len);

	if (p == -1 || t == -1)
		return (-1);

	close(p);

	return (1);
}
