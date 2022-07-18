#include "list.h"
/**
 * print_listint - Entry Point
 * @h: struct listint_t type
 * Return: size_t value
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
