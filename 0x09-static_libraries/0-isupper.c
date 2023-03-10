#include "main.h"

/**
 * _isupper - identifies the uppercase char
 * Return: returns 1 if uppecase
 * returns 0 if lowercase
 * @c: receives character argument
 *
 */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
