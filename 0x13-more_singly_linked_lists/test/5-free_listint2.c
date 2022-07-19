#include "lists.h"
/**
 * free_listint2 - a function that frees list
 * @head: head
 *
 * Return: Always (0) Success
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		ptr = *head;
		*head = ptr->next;
		free(ptr);
	}
}

