#include "lists.h"
#include <stdlib.h>

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: the pointer to the head of the list
 * Return: returns the number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *temp = h;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
