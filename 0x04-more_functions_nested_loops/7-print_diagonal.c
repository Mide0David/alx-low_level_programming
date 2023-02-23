#include "main.h"

/**
 * print_diagonal - outputs a diagonal 
 * @n: receive a integer argument 
 *
 */
void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < n; i++)
	{
		int j;

		for(j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}		
