#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - a function that creates an array
 * @size: size of the array to create
 * @c: char to initialize with
 * Return: the char value
 */
char *create_array(unsigned int size, char c)
{
	char *t;
	unsigned int i;

	if (size <= 0)
		return (NULL);
	t = malloc(sizeof(char) * size);
	if (t == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		t[i] = c;

	return (t);
}
