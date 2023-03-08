#include "main.h"
#include <stdio.h>

int squrt(int n, int y);
/**
 * _sqrt_recursion - returns the natural square root
 * @n: the int to cal the square root of
 * Return: returns the square root
 */

int _sqrt_recursion(int n)
{
	return (squrt(n, 1));
}

/**
 * squrt - calculate the square root
 * @n: the num to find the square root of
 * @y: the square to test
 * Return: returns -1 if number is wrong
 * returns y if square is equal to squarroot
 *
 */

int squrt(int n, int y)
{
	int sqrt = y * y;

	if (sqrt > n)
	{
		return (-1);
	}
	else if (sqrt == n)
	{
		return (y);
	}
	else
	{
		return (squrt(n, y + 1));
	}
}
