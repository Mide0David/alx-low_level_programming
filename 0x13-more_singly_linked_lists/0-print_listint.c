#include "lists.h"
#include <stdio.h>

/**
 * print_listint - printout all the elements in the list
 * @h: the pointer to the head of the list
 * Return: returns the number of nodes
 *
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	listint_t *temp = h;

	for (; temp != NULL; temp = temp->next, count++)
	{
		printf("%d\n", temp->n);
	}
	return (count);
}
