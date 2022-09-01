#include "lists.h"

/**
 * get_dnodeint_at_index - a func that returns nth node
 * @head: head
 * @index: index
 *
 * Return: nth node, or NULL if node doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t count = 0;

	while (head != NULL)
	{
		if (count == index)
			break;
		count++;
		head = head->next;
	}

	return (head);
}
