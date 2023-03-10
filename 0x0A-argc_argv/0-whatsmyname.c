#include <stdio.h>
#include "main.h"

/**
 * main - prints the strings typed in
 * @argc: hold the num of strings in argv
 * @argv: hold the strings typed in the cl
 * Return: returns 0 if successful
 */
int main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
