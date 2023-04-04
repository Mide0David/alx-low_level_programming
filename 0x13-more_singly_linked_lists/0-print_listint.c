#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_listint - printout all the elements in the list
 * @h: the pointer to the head of the list
 * Return: returns the number of nodes
 *
 */

size_t print_listint(const listint_t *h)
{
	size_t node_num = 0;
	const listint_t *temp = h;

	if (h == NULL)
	{
		return (-1);
	}

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		node_num++;
	}
	return (node_num);
}
