#include <stdio.h>
#include "lists.h"

/**
 * print_list - print the list
 * @h: the list to print from
 * Return: the number of elemet int the list
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != 0)
	{
		if (h->str == 0)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}

		h = h->next;
		count++;
	}
	return (count);
}
