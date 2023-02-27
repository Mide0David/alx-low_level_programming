#include "main.h"

/**
 * print_rev - output the reverse of the string
 * @s: the character parameter
 *
 */
void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}

	for (c -= 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}

	_putchar('\n');
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
