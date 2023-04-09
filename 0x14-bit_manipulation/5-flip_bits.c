#include <stdio.h>
#include "main.h"

/**
 * flip_bits - takes two unsigned long int as input n and ,
 * returns the number of bit flips needed to transform n into m
 * @n: first number
 * @m: the second number
 * Return: returns the number of bit in the number
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0;
	unsigned long int result = n ^ m;

	while (result != 0)
	{
		count += result & 1;
		result >>= 1;
	}

	return (count);
}
