#include "main.h"
/**
 * error_file - checks if the file can be opened
 * @file_from: is the filename file_from.
 * @file_to: is the filename  file_to.
 * @argv: arguments passed
 * Return: void
 */
void error_file(int file_from, int file_to, char *argv[])
{
	/*check if file_from == NULL*/
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	/*checks if file_to == NULL*/
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - copies content of a file to the next
 * @argc: number of arguments give
 * @argv: array of pointers to arguments
 *
 * Return: Always 0.
 *
 * Description: exit code 100. if file_to or file_from cannot be closed
 * exit code 99. if file_to can not be created or written to
 * exit code 98. if file_form does not exist
 * exit code 97. if arguments count is incorrect
 */
int main(int argc, char *argv[])
{
	/*declear variables*/
	int file_from, file_to, err_close;
	ssize_t chars, wr;
	char buf[1024];

	/*check if number of arguments passed is correct*/
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	/*open source and destination files using open function*/
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);

	/*read from the source file in aloop using read function*/
	chars = 1024;
	while (chars == 1024)
	{
		chars = read(file_from, buf, 1024);
		if (chars == -1)
			error_file(-1, 0, argv);
		wr = write(file_to, buf, chars);
		if (wr == -1)
			error_file(0, -1, argv);
	}

	/*close the source destination file using close function*/
	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);

		exit(100);
	}

	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);

		exit(100);
	}
	return (0);
}
