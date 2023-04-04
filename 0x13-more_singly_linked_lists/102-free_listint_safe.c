#include "lists.h"

/**
 * free_listint_safe - frees the list that has a loop
 * @h: pointer to the first node of the list
 * Return: returns the size of the list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *following;
	size_t count = 0;

	if (h == NULL || *h == NULL)
	{
		return (0);
	}

	current = *h;
	while (current != NULL)
	{
		following = current->next;
		free(current);
		count++;

		if (following >= current)
			break;

		current = following;
	}

	*h = NULL;
	return (count);
}
