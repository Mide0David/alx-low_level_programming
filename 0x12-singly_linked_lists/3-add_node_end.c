#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @str: String to be added as the new node.
 * Return: Address of the new element, of Null if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end_node, *new_node;
	unsigned int len = 0;

	while(str[len] != 0)
	{
		len++;
	}

	new_node = malloc (sizeof(list_t));

	if(end_node == 0)
	{
		return (0);
	}

	new_node->str = strdup(str);
	if (new_node->str == 0)
	{
		free(new_node);
		return (0);
	}

	new_node->len = len;
	new_node->next = 0;

	if (*head == 0)
	{
		*head = new_node;
		return (new_node);
	}

	end_node = *head;

	while (end_node->next != NULL)
	{
		end_node = end_node->next;
	}
	end_node->next = new_node;

	return (new_node);
}
