#include "lists.h"
/**
 * insert_nodeint_at_index - a func that inserts node at nth position
 * @head: head
 * @idx: index
 * @n: data
 * Return: added node, if no node then NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;

	listint_t *new_node;
	listint_t *tmp;

	if (*head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	tmp = *head;
	while (i < (idx - 1))
	{
		tmp = tmp->next;
		i++;

		if (tmp == NULL)
		{
			free(new_node);
			return (NULL);
		}
	}

	new_node->next = tmp->next;
	tmp->next = new_node;
	return (new_node);
}
