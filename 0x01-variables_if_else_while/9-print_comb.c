#include<stdio.h>

/**
 * main - ouputs the number 0 - 9
 * Return: returns  0 if process was successful
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i < 57)
		{
		putchar(',');
		putchar(' ');
		}
	}
putchar('\n');
	return (0);
}
