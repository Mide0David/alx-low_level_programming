#include "main.h"

/**
 * _abs - checks for lowercase characters
 * Return: returns zero if uppercase nd one if lower
 * @c: this holds the character passed in
 *
 */
int _abs(int c)
{
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
