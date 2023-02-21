#include "main.h"

/**
 * print_last_digit - checks for lowercase characters
 * Return: returns zero if uppercase nd one if lower
 * @n: this holds the character passed in
 *
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
	last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
