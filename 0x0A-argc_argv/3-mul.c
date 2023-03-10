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
	int n1 = 0, n2 = 0;

	if (argc == 3)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		printf("%d\n", n1 * n2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
