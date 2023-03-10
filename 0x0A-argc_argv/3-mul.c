#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies the int typed in the cl
 * @argc: store the num of strings typed in
 * @argv: hold the value of the char array
 * Return: returns 0 if process was successful
 *
 */
int main(int argc, char *argv[])
{
	int multiple = 1;
	int i;

	if (argc == 1)
	{
	printf("Error\n");
	}
	else
	{
	for (i = 1; i < argc; i++)
	{
		multiple *= atoi(argv[i]);

	}
	printf("%d\n", multiple);

	}
	return (0);
}
