#include <stdio.h>
#include "lists.h"

/**
 * add_node - adds a node at the beginning of a list_t
 * @head: the prev first node in the list
 * @str: the string element in the node
 * Return: returns the address of the new node (new_node)
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0;

	while (str[len] != 0)
	{
		len++;
	}

	new_node = malloc(sizeof(list_t));
	if (new_node == 0)
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
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
