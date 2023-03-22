#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - prints elements in a newline
 * @array: pointer to array of int type
 * @size: type of size_t typedef
 * @action: pointer to function
 * Return: returns nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
