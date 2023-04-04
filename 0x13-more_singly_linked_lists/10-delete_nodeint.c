#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of linked list
 * @head: pointer to the first node in the linked list
 * @index: the index of the node that should be deleted
 * Return: returns 1 if successful and -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	unsigned int total = 0;

	listint_t *prev = NULL;
	listint_t *temp = *head;

	if (index == 0)
	{
		if (*head == NULL)
		{
			return (-1);
		}
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (temp != NULL)
	{
		total++;
		temp = temp->next;
	}
	temp = *head;

	while (count < total)
	{
		if (count == index)
		{
			prev->next = temp->next;
			free(temp);
			temp = NULL;
			break;

		}
		prev = temp;
		temp = temp->next;
		count++;
	}
	return (1);
}
