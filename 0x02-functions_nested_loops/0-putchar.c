#include "main.h"

/**
 * main - this outputs _putchar
 * Return: it return 0 if successful
 */
int main(void)
{
	char c[] = "_putchar";
	int i;

	for (i = 0; i != '\0'; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
