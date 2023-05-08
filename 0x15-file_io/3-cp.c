#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <stdlib.h>
#include <stdlib.h>
#include "main.h"

#define BUF_SIZE 1024
/**
 * main - copies the content of a file to another file.
 * @argc: The number of arguments passed to the program
 * @argv: An array of strings containing the arguments passed to
 * the program
 *
 * Return: 0 on success, or a non-zero integer on failure
 */
int main(int argc, char *argv[])
{
	int fd, fd_value;
	mode_t permissions;
	ssize_t nread;
	char *buffer = malloc(sizeof(char) * BUF_SIZE);

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(argv[1], O_RDONLY);
	if ((fd == -1 && errno == ENOENT) || (fd == -1 && errno == EACCES))
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	fd_value = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, permissions);
	if (fd_value == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[2]);
		exit(99);
	}
	while (nread > 0)
	{
		nread = read(fd, buffer, BUF_SIZE);
		if (write(fd_value, buffer, nread) != nread)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(98);			
		}
	}
	if (nread == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read form file %s\n", argv[1]);
		exit(98);
	}
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	if (close(fd_value) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd_value);
		exit(100);
	}
	return (0);
}
