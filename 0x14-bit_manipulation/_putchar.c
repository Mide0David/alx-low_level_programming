#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes a character to the standard output
 * @c: character to write to the standard output
 */

void _putchar(char c)
{
	write(1, &c, 1);
}
