#include "main.h"

/**
 * _strlen_recursion - counts the amounts of strings
 * in a array
 * @s: the array to be counted
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
}
