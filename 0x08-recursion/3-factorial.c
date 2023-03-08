#include "main.h"

/**
 * factorial - returns the factorial of a whole num
 * @n: the num to find its factorial
 * Return: returns the factorial on n
 *
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
