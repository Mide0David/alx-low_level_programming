#include<stdio.h>
#include<stdlib.h>
#include "lists.h"

/**
 * free_listint - free the memory of the list
 * @head: the pointer to first node
 * Return: returns Nothing
 *
 */

void free_listint(listint_t *head)
{
	listint_t *temp = head;
	listint_t *following;

	while (temp != NULL)
	{
		following = temp->next;

		free(temp);
		temp = following;
	}
	head = NULL;
}
