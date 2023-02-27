#include <unistd.h>

/**
 * _putchar - write to the file discriptor for the stdout
 * @a: receives the argument character
 */


void _putchar(char a)
{
	write(1, &a, 1);
}
