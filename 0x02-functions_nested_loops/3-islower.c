#include "main.h"

/**
 * _islower - checks for lowercase characters
 * Return: returns zero if uppercase nd one if lower
 * @c: this holds the character passed in
 *
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	putchar('\n');
}
