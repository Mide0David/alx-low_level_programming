#include "main.h"

/**
 * print_rev - output the reverse of the string
 * @s: the character parameter
 *
 */
void print_rev(char *s)
{
	int i;
	int n;

	n = _strlen(s);
	i = n - 1
	for (; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
