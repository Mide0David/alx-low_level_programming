#include "main.h"

/**
 * print_square - outputs n square with #
 * @size: recives the interger agruments
 *
 */
void print_square(int size)
{
	int i;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < size; i++)
	{
		int j;

		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
