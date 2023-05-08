#include <stdio.h>
#include <stdlib.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: string to add to the end of file
 * Return: return 1 if successful -1 in failed
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;

	if (filename == NULL)
	{
		return (-1);
	}

	file = fopen(filename, "a");
	if (file == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		fprintf(file, "%s", text_content);
	}
	fclose(file);
	return (1);
}
