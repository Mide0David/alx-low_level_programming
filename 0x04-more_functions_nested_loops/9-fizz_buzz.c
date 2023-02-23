#include <stdio.h>

/**
 * main - output numbers 1 - 100
 * if it is a multiple of 3,5 or both
 * it outputs fizz,buzz and fizzbuzz respectivly
 * Return: returns zero if successful
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (((i % 3) == 0) && ((i % 5) == 0))
		{
			printf("FizzBuzz");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		printf("\n");
	}
	return (0);
}
