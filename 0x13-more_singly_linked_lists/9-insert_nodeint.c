#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: the double pointer to the address of the first node
 * in the list
 * @idx: index of the list where the new node should be added
 * @n: the number to place in data(n)
 * Return: returns the address of new node
 *
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *current = NULL;
	listint_t *temp;

	if (head == NULL)
	{
		return (NULL);
	}

	current = *head;
	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;

	if (idx == 0)
	{
		temp->next = *head;
		*head = temp;
		return (temp);
	}

	while (count < (idx) - 1 && current != NULL)
	{
		count++;
		current = current->next;
	}
	if (current == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->next = current->next;
	current->next = temp;

	return (temp);
}
