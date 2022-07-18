#include "lists.h"
/**
 * listint_len - a function that prints length of elem
 * @h: struct listint_t type
 * Return: size_t value
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
