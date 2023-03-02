#include <unistd.h>

/**
 * _putchar - writes s to the standard output(stdout)
 * @s: charater to write to the standard output
 */
void _putchar(char s)
{
	write(1, &s, 1);
}
