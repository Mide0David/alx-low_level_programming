#include<unistd.h>

/**
 * main - to output the word _putchar
 * Return: it returns zero if successful
 */
int _putchar(char c)
{
	putchar('\n');
	return (write(1, &c, 1));
}
