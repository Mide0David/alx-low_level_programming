#include <stdio.h>
#include "lists.h"

/**
 * print_listint - printout all the elements in the list
 * @h: the pointer to the head of the list
 * Return: returns the number of nodes
 *
 */

size_t print_listint(const listint_t *h)
{
	size_t node_num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_num++;
	}
	return (node_num);
}
