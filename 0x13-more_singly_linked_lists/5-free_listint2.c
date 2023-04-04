#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - frees memory space for the list
 * @head: the double pointer to the pointer to the first node
 * Return: returns nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *delete;

	if (head == NULL)
	{
		return;
	}

	for (delete = *head; delete != NULL; delete = *head)
	{
		*head = (*head)->next;

		free(delete);
	}
	*head = NULL;
}
