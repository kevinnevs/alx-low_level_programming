#include "lists.h"
/**
 * pop_listint - a function that deletes the head node
 * @head: head
 * Return: Always (0) Success
 */
int pop_listint(listint_t **head)
{
	int node_data;

	listint_t *new;

	if (*head == NULL)
		return (0);

	node_data = (*head)->n;

	new = *head;
	*head = (*head)->next;

	free(new);
	return (node_data);
}
