#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - it create an array of integer from min to max
 * @min: the integer to start from
 * @max: the integer ot end the array at
 * Return: returns the array form the min num to the max num
 *
 */

int *array_range(int min, int max)
{
	int len, i;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}

	len = max - min + 1;

	ptr = (int *) malloc(len * sizeof(int));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= max - min; i++)
	{
		ptr[i] = min++;
	}
	return (ptr);
}
