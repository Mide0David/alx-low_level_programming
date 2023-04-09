#include <stdio.h>
#include <stdlib.h>

int square(const int a, const int b);
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: points to a string of 0 and 1 charcters
 * Return: returns the converted unsigned number
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int conv = 0;
	const char *temp = b;

	if (b == NULL)
	{
		return (0);
	}
	while (*temp != '\0')
	{
		if (*temp != '1' && *temp != '0')
		{
			return (0);
		}

		conv = conv * 2 + (*temp - '0');
		++temp;
	}
	return (conv);
}
