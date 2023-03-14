#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate a string to a new array
 * @str: the string to copy
<F7> * Return: returns the pointer to the copied string
 * and returns NULL if memory allocation falied
 */

char *_strdup(char *str)
{
	int i, j, sum = 0;
	char *cpy;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; *(str + i) != '\0'; i++)
	{
		sum++;
	}

	cpy = (char *) malloc(sum * sizeof(char) + 1);

	if (cpy == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < sum; j++)
	{
		*(cpy + j) = *(str + j);
	}
	return (cpy);
}
