#include "main.h"

/**
 * _isalpha - checks for lowercase characters
 * Return: returns zero if uppercase nd one if lower
 * @c: this holds the character passed in
 *
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
