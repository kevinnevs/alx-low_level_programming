#include "lists.h"
/**
 * reverse_listint - a func that reverse list
 * @head: head
 * Return: a pointer to the fist node of reversed list
 */
listint_t *reverse_listint(listint_t **head);
{
	listint_t *copy;
	listint_t *temp;

	if (*head == NULL)
		return (NULL);

	copy = *head;
	temp = NULL;

	while (*head != NULL)
	{
		copy = (*head)->next;
		(*head)->next = temp;
		temp = *head;
		*head = copy;
	}

	*head = temp;
	return (*head);
}

