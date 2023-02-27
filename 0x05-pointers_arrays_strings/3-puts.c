#include "main.h"

/**
 * _puts - prints out a string to the stdput
 * @str: receives the string
 *
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
