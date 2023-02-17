#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - outputs the words inside the string if the statment are true
 * Return: return 0 if it was a success
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	if (lastDigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5 \n", n, lastDigit);
	}
	else if (lastDigit == 0)
	{
		printf("Last digit of %d is %d and is 0 \n", n, lastDigit);
	}
	else if (lastDigit < 6 && !(lastDigit == 0))
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
	}
	return (0);
}
