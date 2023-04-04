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
	unsigned int total = 0;
	listint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *following = (*head)->next;
	listint_t *temp = malloc(sizeof(listint_t));

	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;


	while (current != NULL)
	{
		total++;
		current = current->next;
	}
	total++;
	if (idx > total)
	{
		return (NULL);
	}

	current = *head;

	while (count < idx)
	{
		following = following->next;
		prev = current;
		current = current->next;
		count++;
	}
	temp->next = current;
	prev->next = temp;
	return (temp);
}
