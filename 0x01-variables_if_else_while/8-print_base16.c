#include<stdio.h>

/**
 * main - ouputs the hex 0 to f
 * Return: returns  0 if process was successful
 */
int main(void)
{
	int y;

	for (y = 0; y <= 15; y++)
	{
		if (y < 10)
		{
			putchar('0' + y);
		}
		else
		{
			putchar('a' + (y - 10));
		}
	}
putchar('\n');
	return (0);
}
