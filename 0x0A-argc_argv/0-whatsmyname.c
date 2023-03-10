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
	(void)argc;

	printf("%d\n", argv[0]);

	return (0);
}
