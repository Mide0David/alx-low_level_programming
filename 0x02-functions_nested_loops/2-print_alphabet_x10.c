#include "main.h"

/**
 * print_alphabet_x10 - outputs the letters a to z
 */

void print_alphabet_x10(void)
{
	int y;
	char i;

	for (y = 0; y < 10; y++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			putchar(i);
		}
		putchar('\n');
	}
}
