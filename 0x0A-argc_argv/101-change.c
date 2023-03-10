#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int cents, num_one = 0, num_quarters = 0, cents = atoi(argv[1]);
	int num_dimes = 0, num_nickels = 0, num_twos = 0;
	int total_coins = num_quarters + num_dimes + num_nickels + num_twos + num_one;

	if (argc != 2)
	{
		printf("Error\n"), return (1);
	}
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	while (cents >= 25)
	{
		cents -= 25;
		num_quarters++;
	}
	while (cents >= 10)
	{
		cents -= 10;
		num_dimes++;
	}
	while (cents >= 5)
	{
		cents -= 5;
		num_nickels++;
	}
	while (cents >= 2)
	{
		cents -= 2;
		num_twos++;
	}
	while (cents >= 1)
	{
		cents -= 1;
		num_one++;
	}
	printf("%d\n", total_coins);
	return (0);
}
