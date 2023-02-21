#include<unistd.h>

/**
 * _putchar - to output the word _putchar
 * @c: the char to output
 * Return: it returns zero if successful
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
