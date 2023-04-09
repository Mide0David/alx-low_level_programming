#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: returns 0 if big endian and 1 if little endian
 */

int get_endianness(void)
{
	int x = 1;
	char *c = (char*)&x;
	return (*c == 1);
}
