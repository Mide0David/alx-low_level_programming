#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: the pointer to the first node in the list
 * Return: returns the address of the node where the loops
 * start
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = NULL;
	listint_t *fast = NULL;

	if (head == NULL)
	{
		return (NULL);
	}
	slow = head;
	fast = head;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (slow);
		}
	}
	return (NULL);
}
