#include "main.h"

/**
 * print_most_numbers - output 0 - 9 and skips
 * 2 and 4
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i == 4)
		{
			_putchar((n % 10) + '0');
		}
i
	}
	_putchar('\n');
}
