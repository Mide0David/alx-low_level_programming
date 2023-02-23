#include "main.h"

/**
 * print_triangle - outputs a triangle
 * made of #
 * @size: receives the size of triangle
 * to output
 */
void print_triangle(int size)
{
	int i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 1; i <= size; i++)
	{
		int k;
		int j;

		for (k = 1; k <= size - i; k++)
		{
			_putchar(' ');
		}

		for (j = 1; j <= i; j++)
		{
			_putchar('#');

		}
		_putchar('\n');
	}
}
