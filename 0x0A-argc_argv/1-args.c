#include <stdio.h>
#include "main.h"

/**
 * main - prints the string in argv[]
 * @argc: the number of strings in argv
 * @argv: the strings typed in
 * Return: returns 0 if successful
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}
