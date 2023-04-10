#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <stdlib.h>

/**
 * read_textfile - read a text file and prints it to the std out
 * @filename: the file to read from
 * @letters: the number of letters it should read and print
 * Return: 0 if file could not be open , if file name is NULL
 * and if write fails or does not write expected bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t read_bytes, written_bytes;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = (char *) malloc(sizeof(size_t) * letters + 1);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}
	read_bytes = read(fd, buf, letters);
	if (read_bytes == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	buf[read_bytes] = '\0';
	written_bytes = write(STDOUT_FILENO, buf, read_bytes);

	if (written_bytes == -1 || written_bytes != (ssize_t) read_bytes)
	{
		free(buf);
		close(fd);
		return (0);
	}
	free(buf);
	close(fd);
	return (read_bytes);
}
