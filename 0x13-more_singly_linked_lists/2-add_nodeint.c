#include "lists.h"
/**
 * add_nodeint - a function that addes new node
 * @head: head
 * @n: value
 * Return: Always (0) Success
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (next);
}
	
