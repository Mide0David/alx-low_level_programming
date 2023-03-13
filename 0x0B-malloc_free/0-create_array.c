#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - intializes the buffer with a char
 * @size: the size of the empty array
 * @c: the character to initialize the array with
 * Return: returns a pointer to array and Null if it
 * does not create a memory
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	ptr = (char *) malloc(size * sizeof(char));

	if ((size = 0) || (ptr == NULL))
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		*(ptr + i) = c;
	}
	return (ptr);
}
