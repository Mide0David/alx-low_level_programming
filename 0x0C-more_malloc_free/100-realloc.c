#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _realloc - resizes an array to a new size
 * @ptr: the pointer to the array to resize
 * @old_size: the previous size of ptr
 * @new_size: the requested new size
 * Return: its returns the pointer of the array
 * with new size
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *nw_ptr;
	char *src;
	char *dest;

	if (new_size <= old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		return (NULL);
	}

	if (ptr == NULL)
	{
		nw_ptr = malloc(new_size);

		if (nw_ptr == NULL)
		{
			return (NULL);
		}
	}
	nw_ptr = malloc(new_size);
	if (nw_ptr == NULL)
	{
		return (NULL);
	}

	src = (char *)ptr;
	dest = (char *)nw_ptr;
	for (i = 0; i < new_size; i++)
	{
		dest[i] = src[i];
	}

	free(ptr);

	return (nw_ptr);
}
