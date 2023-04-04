#include "lists.h"

/**
 * reverse_listint - reverses the linked list
 * @head: pointer to the first node in the list
 * Return: returns the pointer to the new first node
 * after the reverse
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *following = *head;

	while (*head != NULL)
	{
		following = following->next;
		(*head)->next = prev;
		prev = *head;
		*head = following;
	}
	*head = prev;
	return (prev);
}
