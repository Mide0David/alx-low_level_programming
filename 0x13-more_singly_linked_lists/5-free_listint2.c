#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees memory space for the list
 * @head: the double pointer to the pointer to the first node
 * Return: returns nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *following;
	listint_t *delete = *head;

	while (delete != NULL)
	{
		following = delete->next;

		free(delete);
		delete = following;
	}
	*head = NULL;
}
