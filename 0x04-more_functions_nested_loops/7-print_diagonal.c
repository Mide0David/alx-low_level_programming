#include "main.h"

/**
 * print_diagonal - outputs a diagonal
 * @n: receive a integer argument
 *
 */
void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
	for (i = 0; i <= n; i++)
	{
	int j;

	for (j = 0; j <= i; j++)
	{
	_putchar(' ');
	}
	_putchar('\\');
	if (line == n - 1)
	{
		continue;
	}
	_putchar('\n');
	}
	}
	_putchar('\n');
}
