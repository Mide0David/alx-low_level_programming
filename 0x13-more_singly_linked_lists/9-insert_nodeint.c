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
	listint_t *current = *head;
	listint_t *temp;

	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
	{
		return (NULL);
	}

	if (current == NULL)
	{
		temp->next = NULL;
		temp->n = n;
		*head = temp;
		return (temp);
	}

	if (idx == 0)
	{
		temp->next = current;
		*head = temp;
		return (temp);
	}
	while (count < (idx) - 2)
	{
		count++;
		current = (current)->next;
	}
	temp->next = current->next;
	current->next = temp;

	return (temp);
}
