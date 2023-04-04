#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node to the beginning of a listint_t list
 * @head: the pointer to the first element
 * @n: the number to place in the node
 * Return: returns the address of the new element or NULL if it failed
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = (listint_t *) malloc(sizeof(listint_t));

	if (temp == NULL)
	{
		return (NULL);
	}

	temp->n = n;
	temp->next = *head;

	*head = temp;

	return (*head);
}
