#include "main.h"
/**
 * read_textfile - reads and prints
 * file to the POSIX standard output.
 * @filename: file to read
 * @letters: the number of letters read and print
 *
 * Return: actual number of letters read and printed,
 * 0 if not readable, file name is NULL, write fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, rd, wr;
	char *buffer;

	if (!filename)
		return (0);

	/*openning the file in read-only mode*/
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	/*memory allocation for the buffer*/
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	/*reads from the file into the buffer*/
	rd = read(fd, buffer, letters);

	/*write the buffer to the standard output*/
	wr = write(STDOUT_FILENO, buffer, rd);

	close(fd);/*closes the file*/
	free(buffer); /*frees the memory used by the buffer*/

	return (wr); /*actual number of letters read and printed*/
}

