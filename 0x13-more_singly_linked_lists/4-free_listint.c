#include "lists.h"
/**
 * free_listint - a function that frees list
 * @head: head
 *
 * Return: Always (0) Success
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	while (head)
	{
		free(head);
		head = head->next;
	}
}

