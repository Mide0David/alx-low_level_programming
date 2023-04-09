#include "main.h"
#include <stdio.h>

/**
 * set_bit - set the value at a given index to 1
 * @n: pointer to the numbers
 * @index: the index to set
 * Return: returns 1 if successful and -1 if unsuccessful
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit = (sizeof(unsigned long int) * 8);

	if (index >= bit)
	{
		return (-1);
	}

	*n |= (1UL << index);
	return (1);
}
