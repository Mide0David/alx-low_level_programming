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

	if (b == NULL)
	{
		return (0);
	}

	while (*b != '\0')
	{
		if (*b != '1' && *b != '0')
		{
			return (0);
		}
		position = position * 2 + (*b - '0');
		++b;
	}
	return (position);
}
