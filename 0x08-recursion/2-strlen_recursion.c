#include "main.h"

/**
 * _strlen_recursion - counts the amounts of strings
 * in a array
 * @s: the array to be counted
 * Returns: length of string
 */

int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}

	return (longit);
}
