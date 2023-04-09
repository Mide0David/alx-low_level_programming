#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: returns 0 if big endian and 1 if little endian
 */

int get_endianness(void)
{
	unsigned int num = 0x12345678;
	unsigned char *ptr = (unsigned char *)&num;

		if (*ptr == 0x78)
		{
			return (1);
		}
		else
		{
			return (0);
		}
}
