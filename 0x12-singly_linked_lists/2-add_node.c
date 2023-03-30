#include <string.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_node - adds a node at the beginning of a list_t
 * @head: the prev first node in the list
 * @str: the string element in the node
 * Return: returns the address of the new node (new_node)
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
	len++;

	new = malloc(sizeof(list_t));
	if (!new)
	return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
