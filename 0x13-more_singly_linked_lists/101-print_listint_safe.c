#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - prints the linked listint_t
 * @head: pointer to the first node in the list
 * Return: returns the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp, *prev;
	size_t count = 0;

	if (head == NULL)
	{
		exit(98);
	}


	for (temp = head, prev = NULL; temp != NULL; prev = temp, temp = temp->next)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		count++;

		if (temp < temp->next && temp->next <= prev)
		{
			printf("-> [%p} %d\n", (void *)temp->next, temp->next->n);
			break;
		}
	}
	return (count);
}
