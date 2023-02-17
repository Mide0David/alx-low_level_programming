#include<stdio.h>

/**
 * main - ouputs the letter a to z and A - Z
 * Return: returns  0 if process was successful
 */
int main(void)
{
	char a2z;
	char i;

	for (a2z = 'a'; a2z <= 'z'; a2z++)
	{
		putchar(a2z);
	}
	for (i = 'A'; i <= 'Z'; i++)
	{
		putchar(i);
	}
putchar('\n');
	return (0);
}
