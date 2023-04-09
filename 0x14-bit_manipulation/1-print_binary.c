#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to printi binary rep of
 * Return: returns nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int bit = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int printed = 0;

	while (bit > 0)
	{
		if (n & bit)
		{
			_putchar('1');
			printed = 1;
		}
		else if (printed)
		{
			_putchar('0');
		}
		bit >>= 1;

	}

	if (!printed)
	{
		_putchar('0');
	}
}
