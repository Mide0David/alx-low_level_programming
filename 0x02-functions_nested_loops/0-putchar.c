#include<stdio.h>

/**
 * main - to output the word _putchar
 * Return: it returns zero if successful
 */
int main(void)
{
	char c[] = "_putchar";
	int i = 0;

	while (c[i] != '\0')
	{
		putchar(c[i]);
		i++;
	}
	return (0);
}
