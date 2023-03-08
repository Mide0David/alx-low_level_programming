#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to y
 * @x: the integer to be raised
 * @y: the power to be raised to
 * Return: return the value of x raised ot the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, --y));
	}
}
