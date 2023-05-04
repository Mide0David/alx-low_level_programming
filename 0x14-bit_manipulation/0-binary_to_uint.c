#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - convert form binary to unsigned
 * int
 * @b: the binary num to convert
 * Return: returns the converted number
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int position = 0;

	while (*b != '\0')
	{
		position <<= 1;
		if (*b == '1')
		{
			position += 1;
		}
		b++;
	}
	return (position);
}
