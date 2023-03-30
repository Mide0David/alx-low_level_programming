#include <stdio.h>
#include "lists.h"

/**
 * list_len - count the numbers of elements in a list
 * @h: the first element in the list
 * Return: returns the numbers of elements in the list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != 0)
	{
		count++;
		h = h->next;
	}
	return (count++);
}
