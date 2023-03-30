#include <unistd.h>

/* _putchar - send character to stdoutput stream
 * @c - character to printout
 */

void _putchar(char c)
{
	write(1, &c, 1);
}
