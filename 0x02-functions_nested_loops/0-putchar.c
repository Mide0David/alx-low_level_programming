#include<stdio.h>
#include"main.h"

/**
 * main - to output the word _putchar
 * Reiturn: it returns zero if successful
 */
int main(void)
{
	char c[] = "_putchar";
	int i = 0;

	while (c[i] != '\0')
	{
		putchar(c[i]);
		putchar('\n');
		i++;
	}
	return (0);
}
