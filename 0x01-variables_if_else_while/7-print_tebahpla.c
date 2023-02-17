#include<stdio.h>

/**
 * main - ouputs the letter z to a
 * Return: returns  0 if process was successful
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
putchar('\n');
	return (0);
}
