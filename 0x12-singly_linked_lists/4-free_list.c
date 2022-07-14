#include "lists.h"
/**
 * free_list - a function that frees list_t list
 * @head: input
 * Return: Always (0) Success
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	
	if (head->next != NULL)
		free_list(head->next);
	free_list(head->str);
	free(head);
}
