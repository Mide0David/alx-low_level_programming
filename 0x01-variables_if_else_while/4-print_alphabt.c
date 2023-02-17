#include<stdio.h>

/**
 * main - ouputs the letter a to z and A - Z
 * Return: returns  0 if process was successful
 */
int main(void)
{
	char y;

	for (y = 'a'; y <= 'z'; y++)
	{
		if (y == 'q' || y == 'e')
		{
			continue;
		}
		else
		{
		putchar(y);
		}
	}
putchar('\n');
	return (0);
}
