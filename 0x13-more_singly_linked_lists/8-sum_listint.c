#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - add all the data(n) in the node
 * @head: the pointer to the first node
 * Return: returns the sum of all the data(n)
 * in the node or returns 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int count = head->n;

	listint_t *temp = head;

	if (head == NULL)
	{
		return (0);
		exit(0);
	}
	while (temp != NULL)
	{
		count += temp->n;
		temp = temp->next;
	}
	return (count);
}
