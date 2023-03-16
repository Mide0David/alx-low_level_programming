#include <unistd.h>

/**
 * _putchar - prints to the stdout a string
 * @s: the string to send to the stdout
 */

void _putchar(char s)
{
	write(1, &s, 1);
}
