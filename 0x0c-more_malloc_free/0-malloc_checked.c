#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - checks if memory was successfully created if not
 * it terminate
 * the process
 * @b: the number of element to create
 * Return: it returns a pointer to the space created
 *
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
