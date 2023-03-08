#include "main.h"

/**
 * _puts_recursion - prints a string like puts function in stdio
 * @s: receives the character form the array
 * Returns nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
}
