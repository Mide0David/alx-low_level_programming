#include "main.h"

/**
 * print_sign - checks for lowercase characters
 * Return: returns 1 if num is postive nd -1 for neg 0 for rest
 * @n: this holds the character passed in
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
