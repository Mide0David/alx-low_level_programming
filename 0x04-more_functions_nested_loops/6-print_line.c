#include "main.h"

/**
 * print_line - outputs a straight line
 * @n: receives the number argument
 */
void print_line(int n)
{
	int i;

	if (n < 0)
	{
		_putchar('\n');
	}

	for (i = 1; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
