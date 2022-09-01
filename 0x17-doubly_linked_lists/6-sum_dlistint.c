#include "lists.h"

/**
 * sum_dlistint - a func that sums all data(n)
 * @head: head
 *
 * Return: the sum of data n in distint_t
 */
int sum_dlistint(dlistint_t *head)
{
	size_t res = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		res += head->n;
		head = head->next;
	}

	return (res);
}
