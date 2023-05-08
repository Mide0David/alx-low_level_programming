#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
#include <sys/stat.h>
#include <sys/types.h>

void print_error(int code, const char *msg, const char *arg)
{
	dprintf(STDERR_FILENO, msg, arg);
	exit(code);
}

int main(int argc, char *argv[])
{
	int src_fd, dest_fd, bytes_read, bytes_written;
	char buf[BUF_SIZE];

	if (argc != 3)
	{
		print_error(97, "Usage: cp file_from file_to\n", NULL);
	}

	src_fd = open(argv[1], O_RDONLY);
	if (src_fd == -1)
	{
		print_error(98, "Error: can't read from file %s\n", argv[1]);
	}

	dest_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (dest_fd == -1)
	{
		print_error(99, "Error: can't write to file %s\n", argv[2]);
	}

	while ((bytes_read = read(src_fd, buf, BUF_SIZE)) > 0)
	{
		bytes_written = write(dest_fd, buf, bytes_read);
		
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			print_error(99, "Error: can't write to file %s\n", argv[2]);
		}
	}
	if (bytes_read == -1)
	{
		print_error(98, "Error: can't read from file %s\n", argv[1]);
	}

	if (close(src_fd) == -1)
	{
		print_error(100, "Error: Can't close fd %d\n", src_fd);
	}
	if (close(dest_fd) == -1)
	{
		print_error(100, "Error: can't close fd %d\n", dest_fd);
	}

	return (0);
}
