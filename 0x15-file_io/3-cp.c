#include <stdio.h>
#include <stdlib.h>
#include "main.h"

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
	FILE *in_file = fopen(argv[1], "rb");
	FILE *out_file = fopen(argv[2], "wb");
	char buffer[BUFFER_SIZE];
	size_t bytes_read;


	if (argc != 3)
	{
		fprintf(stderr, "Usage: %s file_from file_to\n", argv[0]);
		exit(1);
	}

	in_file = fopen(argv[1], "rb");
	if (!in_file)
	{
		fprintf(stderr, "Error: Can't open file %s for reading\n", argv[1]);
		exit(1);
	}

	out_file = fopen(argv[2], "wb");
	if (!out_file)
	{
		fprintf(stderr, "Error: Can't open file %s for writing\n", argv[2]);
		fclose(in_file);
		exit(1);
	}
	while ((bytes_read = fread(buffer, 1, BUFFER_SIZE, in_file)) > 0)
	{
		if (fwrite(buffer, 1, bytes_read, out_file) != bytes_read)
		{
			fprintf(stderr, "Error: Can't write to file %s\n", argv[2]);
			fclose(in_file);
			fclose(out_file);
			exit(1);
		}
	}
	fclose(in_file);
	fclose(out_file);
	return 0;
}
