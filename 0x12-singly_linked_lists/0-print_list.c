#include <stdio.h>
#include <stdlib.h>
#include "list.h"
#include <stddef.h>
/**
 * print_list - function to print elem  of list_t
 * @h: head of list
 * Return: the elem in the list
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if (h->str = NULL)
			
			printf("[0] (nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}


