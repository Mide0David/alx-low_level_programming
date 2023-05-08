#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

/**
 * error - prints an error message to the standard error
 * and exits the program with a specified exit code.
 * @message: A string containing the error message to print
 * @exit_code: An integer representing the exit code to exit the
 * program with
 */
void error(char *message, int exit_code)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(exit_code);
}

/**
 * open_file_to_read - opens a file for reading and returns the
 * corresponding file descriptor
 * @filename: A string containing the name of the file to open
 *
 * Return: The file descriptor of the opened file
 */
int open_file_to_read(char *filename)
{
	int fd;

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		error("Error: Can't read from file", 98);
	}
		return (fd);
}

/**
 * open_file_to_write - opens a file for writing and returns the
 * corresponding file descriptor
 * @filename: A string containing the name of the file to open
 *
 * Return: The file descriptor of the opened file
 */
int open_file_to_write(char *filename)
{
	int fd;

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd == -1)
	error("Error: Can't write to file", 99);
	return (fd);
}

/**
 * copy_file - copies the contents of one file to another file
 * @fd_from: The file descriptor of the file to copy from
 * @fd_to: The file descriptor of the file to copy to
 *
 * Return: void
 */
void copy_file(int fd_from, int fd_to)
{
	char buf[1024];
	ssize_t n;

	while ((n = read(fd_from, buf, sizeof(buf))) > 0)
	{
		if (write(fd_to, buf, n) != n)
		error("Error: Can't write to file", 99);
	}

	if (n == -1)
		error("Error: Can't read from file", 98);
}

/**
 * main - copies the content of a file to another file.
 * @argc: The number of arguments passed to the program
 * @argv: An array of strings containing the arguments passed to
 * the program
 *
 * Return: 0 on success, or a non-zero integer on failure
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to;

	if (argc != 3)
	error("Usage: cp file_from file_to", 97);

	fd_from = open_file_to_read(argv[1]);
	fd_to = open_file_to_write(argv[2]);

	copy_file(fd_from, fd_to);

	if (close(fd_from) == -1)
	error("Error: Can't close fd", 100);
	if (close(fd_to) == -1)
	error("Error: Can't close fd", 100);

	return (0);
}
