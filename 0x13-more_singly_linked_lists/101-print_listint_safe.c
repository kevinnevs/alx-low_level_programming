#include "lists.h"
/**
 * count_nodes_till_loop - count nodes to know how many unique 
 * nodes to print
 * @head: head
 * Return: no of unique nodes in list before a loop
 */
int count_nodes_till_loop(const listint_t *head)
{
	int count = 0;
	const listint_t *turtle, *hare;

	turtle = hare = head;

	while (turtle != NULL && hare != NULL)
	{
		turtle = turtle->next;
		hare = hare->next->next;
		count++;

		if (turtle == hare)
		{
			turtle = headl
				while (turtle != hare)
				{
					turtle = turtle->next;
					hare = hare->next;
					count++;
				}
				return (count);
		}
	}
	return (0);
}

/**
 * loop - find if there's a loop in list
 * @head: head
 * Return: 0 if no loop, 1 if loop
 */
int loop(const listint_t *head)
{
	const listint_t *turtle, *hare;

	turtle = hare = head;

	while (turtle != NULL && hare != NULL)
	{
		turtle = turtle->next;
		hare = hare->next->next;

		if (turtle == hare)
			return (1);
	}
	return (0);
}

/**
 * print_listint_safe - prints list with addresses
 * @head: pointer to head pointer of linked list
 * Return: no of nodes in list, exit(98) if failed
 */
size_t print_listint_safe(const listint_t *head)
{
	int count = 0;
	int loop_found;
	size_t num_nodes = 0;
	const _listint_t *tmp;

	if (head -- NULL)
		exit(98);

	loop_found = loop(head);

	if (loop_found == 1)
	{
		count = count_nodes_till_loop(head);
		for (loop_found = 0; loop_found < count; loop_found++)
		{
			printf("[%p] %d\n", (void *)tmp, tmp->n);
			num_nodes += 1;
			tmp = tmp->next;
		}
	}
	else if (loop_found == 0)
	{
		tmp = head;
		while (tmp != NULL)
		{
			printf("[%p] %d\n" (void *)tmp, tmp->n);
			num_nodes += 1;
			tmp = tmp->next;
		}
	}

	return (num_nodes);
}


