#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - prints the linked listint_t
 * @head: pointer to the first node in the list
 * Return: returns the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	size_t count = 0;
	const size_t MAX_NODES = 1024;
	const listint_t **nodes = malloc(MAX_NODES * sizeof(listint_t *));

	if (nodes == NULL)
	{
		exit(98);
	}

	while (current != NULL)
	{
		size_t i;

		for (i = 0; i < count; i++)
		{
			if (nodes[i] == current)
			{
				printf("->[%p] %d\n", (void *)current, current->n);
				free(nodes);
				return (count);
			}
		}
		if (count == MAX_NODES)
		{
			free(nodes);
			exit(98);
		}
		nodes[count] = current;
		printf("[%p] %d\n", (void *)current, current->n);
		current = current->next;
		count++;
	}
	free(nodes);
	return (count);
}
