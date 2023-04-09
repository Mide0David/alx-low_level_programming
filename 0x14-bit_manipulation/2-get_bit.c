#include <stdio.h>

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the bit to check
 * @index: index starting from the bit you want to get
 *
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	return (n >> index) & 1;
}
