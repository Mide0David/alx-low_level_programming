#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <errno.h>
#include <unistd.h>
#include "main.h"

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
 * close_file - closes a file descriptor and exits the program with
 * an error code if an error occurs
 * @fd: An integer representing the file descriptor to close
 * the file descriptor
 */

void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * open_file - opens a file and exits the program with an error code
 * if an error occurs
 * @filename: A string representing the name of the file to open
 * @flags:  An integer representing the flags to use when opening the file
 * @mode: A mode_t representing the permissions to set on the file
 * if it is created
 * Return: returns file discriptor if successful
 */

int open_file(char *filename, int flags, mode_t mode)
{
	int fd = open(filename, flags, mode);

	if (fd == -1)
	{
		char message[100];

		sprintf(message, "Error: Can't open file %s", filename);
		perror(message);
		exit(98);
	}
	return (fd);
}


/**
 * main - copies content of a file to another file
 * @argc: count the number of word typed in an the CL
 * @argv: stores the string typed in the CL
 * Return: returns 0 if successful
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	char buffer[BUFFER_SIZE];
	ssize_t read_bytes, write_bytes;

	if (argc != 3)
	{
		error("Usage: cp file_from file_to", 97);
	}

	fd_from = open_file(argv[1], O_RDONLY, 0);
	fd_to = open_file(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	while ((read_bytes = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		write_bytes = write(fd_to, buffer, read_bytes);
		if (write_bytes == -1 || write_bytes != read_bytes)
		{
			error("Error: Can't write to file", 99);
		}
	}
	if (read_bytes == -1)
	{
		error("Error: Can't read from file", 98);
	}

	close_file(fd_from);
	close_file(fd_to);

	return (0);
}
