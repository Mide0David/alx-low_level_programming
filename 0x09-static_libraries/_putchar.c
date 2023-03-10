#include<unistd.h>

/**
 * _putchar - to output the word _putchar
 * @c: the char to output
 * Returns nothing
 */
void _putchar(char c)
{
	write(1, &c, 1);
}
