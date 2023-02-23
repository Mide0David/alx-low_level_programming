#include "main.h"

/**
 * _isdigit - identifies the number
 * @c: receives the integer argument
 * Return: returns 1 if it a number
 * returns 0 if not
 */
int _isdigit(int c);
{
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
