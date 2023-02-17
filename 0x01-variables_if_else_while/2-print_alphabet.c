#include<stdio.h>

/**
 * main - ouputs the letter a to z
 * Return: returns  0 if process was successful
 */
int main(void)
{
	char a2z;

	for (a2z = 'a'; a2z <= 'z'; a2z++)
	{
		putchar(a2z);
	}
	return (0);
}
