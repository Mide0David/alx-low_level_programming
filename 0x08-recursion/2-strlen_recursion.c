#include "main.h"

/**
 * _strlen_recursion - counts the amounts of strings
 * in a array
 * @s: the array to be counted
 * Returns: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0' )
	{
		return (len);
	}
	else
	{
		s++;
		return (1 + _strlen_recursion(s);
	}
}
