#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - prints the linked listint_t
 * @head: pointer to the first node in the list
 * Return: returns the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head, *following = head;

	size_t count = 0;

	while (current != NULL && following != NULL && following->next != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;

		current = current->next;
		following = following->next->next;

		if (current == following)
		{
			printf("->[%p] %d\n", (void *)current, current->n);
			count++;
			return (count);
		}
	}

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;
		current = current->next;
	}
	return (count);
}
