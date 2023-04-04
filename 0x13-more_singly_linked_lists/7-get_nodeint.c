#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - finds the index node of the linkded list
 * @head: the pointer to the first node in the list
 * @index: the index of the node
 * Return: it returns the address of the node with index
 *
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int sec_count, first_count = 0;

	listint_t *temp = head;

	while (temp != NULL)
	{
		first_count++;
		temp = temp->next;
	}

	temp = head;

	if (index > first_count)
	{
		return (NULL);
	}

	sec_count = 0;

	while (sec_count < index)
	{
		sec_count++;
		temp = temp->next;
	}
	return (temp);
}
