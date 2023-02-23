#include "main.h"

/**
 * print_most_numbers - output 0 - 9 and skips
 * 2 and 4
 */
void print_most_numbers(void)
{
	int i;

	int i = 0;

	while (i < 10)
	{
		if ((i == 2) || (i == 4))
		{
			continue;
		}
	}
	_putchar('\n');
}
