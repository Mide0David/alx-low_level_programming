#include <stdio.h>

/**
 * print
 */

void print_binary(unsigned long int n)
{
	int i;
	for (i = 31; i >= 0; i--)
	{
		unsigned long int bit = 1UL << i;
		
		if (n & bit)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}

	}
}
