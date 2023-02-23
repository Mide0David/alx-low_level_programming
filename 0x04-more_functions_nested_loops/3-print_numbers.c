#include "main.h"

/**
 * print_numbers - outputs num 1 - 9
 */
void print_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
