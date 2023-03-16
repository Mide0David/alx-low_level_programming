#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - creates memory with each space initialized
 * with zero
 * @nmemb: number of element to be created
 * @size: number of size of byte
 * Return: returns the newly allocated array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *ptr;
	char *char_ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	char_ptr = (char *)ptr;
	for (i = 0; i < nmemb; i++)
	{
		char_ptr[i] = 0;
	}
	return (ptr);
}
