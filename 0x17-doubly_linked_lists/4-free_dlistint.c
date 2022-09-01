#include "lists.h"

/**
 * free_dlistint - a func that frees a dlistint_t list
 * @head: head
 *
 * Return: freed list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp_node = NULL;

	while (head != NULL)
	{
		temp_node = head->next;
		free(head);
		head = temp_node;
	}
}
