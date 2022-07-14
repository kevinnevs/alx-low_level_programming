#include "lists.h"
/**
 * list_len - a function that returns the length of elem
 * @h: input
 * Return: the length of elem
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);
	if (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
