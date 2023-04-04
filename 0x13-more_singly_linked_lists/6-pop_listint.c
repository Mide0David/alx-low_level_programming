#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of the linked list
 * @head: the double pointer to the first node
 * Return: returns the int value in the freed head node
 */

int pop_listint(listint_t **head)
{
	int num;

	listint_t *current;

	if (*head == NULL)
	{
		return (0);
	}

	num = (*head)->n;
	current = (*head)->next;

	free(*head);
	*head = current;

	return (num);
}
